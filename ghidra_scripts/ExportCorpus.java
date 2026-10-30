// Decompile every internal function to a C file. One file per function: <addr>_<name>.c
// Writes an index.tsv (addr<TAB>name<TAB>status) into the output dir.
// Arg 0 (optional): output directory. Default /home/matt/Tach-play/decomp/corpus
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportCorpus extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = (args.length > 0) ? args[0] : "/home/matt/Tach-play/decomp/corpus";
        File outDir = new File(outPath);
        outDir.mkdirs();

        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0, failed = 0;
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "index.tsv")));
        while (it.hasNext()) {
            if (monitor.isCancelled()) break;
            Function f = it.next();
            if (f.isExternal() || f.isThunk()) continue;
            String addr = f.getEntryPoint().toString();
            String name = f.getName();
            String status = "ok";
            String code;
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                code = r.getDecompiledFunction().getC();
            } else {
                status = "FAILED";
                code = "// decompile failed: " + (r != null ? r.getErrorMessage() : "null result") + "\n";
                failed++;
            }
            String safe = name.replaceAll("[^A-Za-z0-9_]", "_");
            PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, addr + "_" + safe + ".c")));
            w.print(code);
            w.close();
            idx.println(addr + "\t" + name + "\t" + status);
            n++;
            if (n % 500 == 0) println("  ... exported " + n);
        }
        idx.close();
        di.dispose();
        println("ExportCorpus: wrote " + n + " functions (" + failed + " failed) to " + outPath);
    }
}
