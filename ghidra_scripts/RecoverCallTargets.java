// Second-stage recovery: promote direct CALL targets that aren't yet functions.
// Much flight-sim code is reached only via calls from orphan/vtable code, so the
// pointer-table pass missed it. This walks all decoded instructions, and for every
// direct call target in executable memory with no containing function, disassembles
// (if needed) and createFunction()s it. Re-analyzes and repeats to a fixpoint.
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.FlowType;
import java.util.ArrayList;
import java.util.List;

public class RecoverCallTargets extends GhidraScript {
    @Override
    public void run() throws Exception {
        long before = currentProgram.getFunctionManager().getFunctionCount();
        int round = 0;
        while (round < 15) {
            round++;
            List<Address> targets = new ArrayList<>();
            InstructionIterator it = currentProgram.getListing().getInstructions(true);
            while (it.hasNext()) {
                if (monitor.isCancelled()) break;
                Instruction ins = it.next();
                FlowType ft = ins.getFlowType();
                if (!ft.isCall()) continue;
                for (Address t : ins.getFlows()) {
                    MemoryBlock b = currentProgram.getMemory().getBlock(t);
                    if (b != null && b.isExecute()
                            && getFunctionAt(t) == null && getFunctionContaining(t) == null) {
                        targets.add(t);
                    }
                }
            }
            long created = 0;
            for (Address t : targets) {
                if (getFunctionContaining(t) != null) continue;
                if (getInstructionAt(t) == null) disassemble(t);
                if (getInstructionAt(t) != null && createFunction(t, null) != null) created++;
            }
            analyzeChanges(currentProgram);
            long now = currentProgram.getFunctionManager().getFunctionCount();
            println("round " + round + ": callTargetsCreated=" + created + " total=" + now);
            if (created == 0) break;
        }
        long after = currentProgram.getFunctionManager().getFunctionCount();
        println("RecoverCallTargets: added=" + (after - before) + " before=" + before + " after=" + after);
    }
}
