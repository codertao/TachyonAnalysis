// Detect runs of consecutive 4-byte pointers-into-executable-memory in data blocks.
// These are the vtables / mode tables / dispatch tables. Emits a TSV documenting each run:
//   <base-addr> \t <count> \t <target0,target1,...>   (min run length 3)
// Arg 0 (optional): output TSV path. Default sidecar/tables.tsv
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class DumpPtrTables extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = (args.length > 0) ? args[0] : "/home/matt/Tach-play/decomp/sidecar/tables.tsv";
        new File(outPath).getParentFile().mkdirs();
        Memory mem = currentProgram.getMemory();
        PrintWriter w = new PrintWriter(new FileWriter(outPath));
        w.println("# base_addr\tcount\ttargets");
        int tables = 0;

        for (MemoryBlock blk : mem.getBlocks()) {
            if (!blk.isInitialized() || blk.isExecute()) continue;
            Address a = blk.getStart();
            Address end = blk.getEnd();
            List<Address> run = new ArrayList<>();
            Address runBase = null;
            while (a.compareTo(end) <= 0) {
                if (monitor.isCancelled()) break;
                int v;
                boolean isPtr = false;
                try {
                    v = mem.getInt(a);
                    Address t = toAddr(((long) v) & 0xffffffffL);
                    MemoryBlock tb = mem.getBlock(t);
                    if (tb != null && tb.isExecute()) { isPtr = true; if (runBase == null) runBase = a; run.add(t); }
                } catch (Exception e) { /* fallthrough as non-ptr */ }

                if (!isPtr) {
                    if (run.size() >= 3) { emit(w, runBase, run); tables++; }
                    run.clear(); runBase = null;
                }
                a = a.add(4);
            }
            if (run.size() >= 3) { emit(w, runBase, run); tables++; }
        }
        w.close();
        println("DumpPtrTables: wrote " + tables + " tables to " + outPath);
    }

    private void emit(PrintWriter w, Address base, List<Address> targets) {
        StringBuilder sb = new StringBuilder();
        int lim = Math.min(targets.size(), 32);
        for (int i = 0; i < lim; i++) { if (i > 0) sb.append(","); sb.append(targets.get(i).toString()); }
        if (targets.size() > lim) sb.append(",...");
        w.println(base.toString() + "\t" + targets.size() + "\t" + sb);
    }
}
