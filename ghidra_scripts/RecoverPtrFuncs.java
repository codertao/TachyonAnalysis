// Recover functions reachable only via function-pointer tables, to a FIXPOINT.
// Each round: (1) scan initialized non-exec blocks (.rdata/.data) for 4-byte values pointing
// into executable memory and createFunction() at plausible, not-yet-defined targets;
// (2) re-run analysis so Ghidra follows CALLs in the new bodies and creates their callees
// (functions reachable only from table-functions). Repeat until the function count stabilizes.
// Idempotent: skips addresses already inside a function.
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import java.util.HashSet;
import java.util.Set;

public class RecoverPtrFuncs extends GhidraScript {

    private static final Set<Integer> PROLOGUE = new HashSet<>();
    static {
        int[] b = {0x55,0x53,0x56,0x57,0x51,0x52,0x50,0x54,
                   0x8b,0x89,0x83,0x81,0x6a,0x68,0xc7,0x8d,
                   0x33,0x31,0xa1,0xb8,0x64,0xf3,0xe9,0xeb,0x0f,0xff,0xd9,0xdd};
        for (int x : b) PROLOGUE.add(x);
    }

    private long scanAndCreate() throws Exception {
        Memory mem = currentProgram.getMemory();
        long created = 0;
        for (MemoryBlock blk : mem.getBlocks()) {
            if (!blk.isInitialized() || blk.isExecute()) continue;
            Address a = blk.getStart();
            Address end = blk.getEnd();
            while (a.compareTo(end) <= 0) {
                if (monitor.isCancelled()) break;
                int v;
                try { v = mem.getInt(a); } catch (Exception e) { a = a.add(4); continue; }
                Address t = toAddr(((long) v) & 0xffffffffL);
                MemoryBlock tb = mem.getBlock(t);
                if (tb != null && tb.isExecute() && getFunctionContaining(t) == null) {
                    boolean ok = false;
                    Instruction ins = getInstructionAt(t);
                    if (ins != null) {
                        ok = true;
                    } else if (getInstructionContaining(t) == null) {
                        int b0 = getByte(t) & 0xff;
                        if (PROLOGUE.contains(b0) && disassemble(t)) ok = (getInstructionAt(t) != null);
                    }
                    if (ok && createFunction(t, null) != null) created++;
                }
                a = a.add(4);
            }
        }
        return created;
    }

    @Override
    public void run() throws Exception {
        long before = currentProgram.getFunctionManager().getFunctionCount();
        long totalFromTables = 0;
        int round = 0;
        while (round < 12) {
            round++;
            long prevCount = currentProgram.getFunctionManager().getFunctionCount();
            long fromTables = scanAndCreate();
            totalFromTables += fromTables;
            analyzeChanges(currentProgram); // follow calls -> create callees reachable only from table funcs
            long nowCount = currentProgram.getFunctionManager().getFunctionCount();
            long fromAnalysis = nowCount - prevCount - fromTables;
            println("round " + round + ": fromTables=" + fromTables
                    + " fromAnalysis(callees)=" + fromAnalysis + " total=" + nowCount);
            if (nowCount == prevCount) break; // fixpoint
        }
        long after = currentProgram.getFunctionManager().getFunctionCount();
        println("RecoverPtrFuncs fixpoint: rounds=" + round + " createdFromTables=" + totalFromTables
                + " netAdded=" + (after - before) + " functionsBefore=" + before + " functionsAfter=" + after);
    }
}
