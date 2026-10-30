// Export user-named local/param variables to a sidecar TSV, for back-porting GUI work.
// Row: funcAddr \t kind \t storage \t pc \t name \t datatype  (same key scheme ApplyVars reads)
// Only meaningful (non-auto) names are emitted. Writes to a *.export.tsv so it never clobbers
// the authoritative vars.tsv; merge into vars.tsv when back-porting.
// Arg0 (optional): output path. Default sidecar/vars.export.tsv
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighSymbol;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Iterator;

public class DumpVars extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = (args.length > 0) ? args[0]
                : "/home/matt/Tach-play/decomp/sidecar/vars.export.tsv";

        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        PrintWriter w = new PrintWriter(new FileWriter(outPath));
        w.println("# Tachyon sidecar — variable names. Format: funcAddr\\tkind\\tstorage\\tpc\\tname\\tdatatype");
        w.println("# storage=VariableStorage key (match key); pc=symbol PC addr or -; datatype optional.");
        w.println("# Only meaningful (non-auto) names exported. Apply with ApplyVars.java.");

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int funcs = 0, vars = 0;
        while (it.hasNext()) {
            if (monitor.isCancelled()) break;
            Function f = it.next();
            if (f.isExternal() || f.isThunk()) continue;
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            if (r == null || r.getHighFunction() == null) continue;
            HighFunction hf = r.getHighFunction();
            Iterator<HighSymbol> syms = hf.getLocalSymbolMap().getSymbols();
            boolean wroteAny = false;
            while (syms.hasNext()) {
                HighSymbol s = syms.next();
                String name = s.getName();
                if (isDefaultVarName(name)) continue;
                String kind = s.isParameter() ? "param" : "local";
                String storage = s.getStorage().toString();
                Address pc = s.getPCAddress();
                String pcs = (pc == null) ? "-" : pc.toString();
                String dt = (s.getDataType() != null) ? s.getDataType().getName() : "";
                w.println(f.getEntryPoint() + "\t" + kind + "\t" + storage + "\t"
                        + pcs + "\t" + name + "\t" + dt);
                vars++;
                wroteAny = true;
            }
            if (wroteAny) funcs++;
        }
        w.close();
        di.dispose();
        println("DumpVars: " + vars + " named vars across " + funcs + " funcs -> " + outPath);
    }

    // Mirrors Ghidra's auto-naming so only hand-given names survive export.
    private static boolean isDefaultVarName(String n) {
        if (n == null || n.isEmpty()) return true;
        if (n.matches("(param|local)_[0-9a-fA-Fx]+")) return true;      // param_1, local_8
        if (n.matches("[a-z]{1,4}(Var|Stack)_?[0-9a-fA-Fx]+")) return true; // uVar1, puStack_8
        if (n.matches("(in|unaff|extraout)_.*")) return true;           // in_EAX, unaff_EBX
        if (n.matches("unique_[0-9a-fA-Fx]+")) return true;
        return false;
    }
}
