// Export user-given function names (+ function comments) to a sidecar TSV, for back-porting
// GUI renames. Row: addr \t name \t comment?  (same format ApplyNames reads; \n encodes newlines)
// Only non-default names (not FUN_*) are emitted. Writes to a *.export.tsv so it never clobbers
// the authoritative, hand-curated names.tsv (which also holds data labels); merge when back-porting.
// Arg0 (optional): output path. Default sidecar/names.export.tsv
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DumpNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = (args.length > 0) ? args[0]
                : "/home/matt/Tach-play/decomp/sidecar/names.export.tsv";
        PrintWriter w = new PrintWriter(new FileWriter(outPath));
        w.println("# Tachyon sidecar — exported function names. Format: addr\\tname\\tcomment");
        w.println("# Only non-default (not FUN_*) names. Merge into names.tsv when back-porting.");

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext()) {
            Function f = it.next();
            if (f.isExternal() || f.isThunk()) continue;
            String name = f.getName();
            if (name.matches("FUN_[0-9a-fA-F]+")) continue;
            String c = f.getComment();
            String comment = (c == null) ? "" : c.replace("\r", "").replace("\n", "\\n");
            w.println(f.getEntryPoint() + "\t" + name + (comment.isEmpty() ? "" : "\t" + comment));
            n++;
        }
        w.close();
        println("DumpNames: wrote " + n + " named functions -> " + outPath);
    }
}
