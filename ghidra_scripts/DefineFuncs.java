// Create functions at the given entry points (if not already defined) and decompile them into
// the corpus. Args: <corpusDir> <addr-hex>...   (writes <corpusDir>/<addr>_<name>.c)
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.Function;
import java.io.*;

public class DefineFuncs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File outDir = new File(a[0]);
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        for (int i = 1; i < a.length; i++) {
            Address ad = toAddr(a[i]);
            Function f = getFunctionAt(ad);
            if (f == null) {
                if (getInstructionAt(ad) == null) disassemble(ad);
                f = createFunction(ad, null);
            }
            if (f == null) { println("DefineFuncs: FAILED " + ad); continue; }
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            String code = (r != null && r.decompileCompleted()) ? r.getDecompiledFunction().getC() : "/* decompile failed */";
            String safe = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
            try (PrintWriter w = new PrintWriter(new FileWriter(new File(outDir, ad + "_" + safe + ".c")))) { w.print(code); }
            println("DefineFuncs: " + ad + " " + f.getName() + " body=" + f.getBody().getNumAddresses());
        }
        di.dispose();
    }
}
