// Export user-defined non-function labels (data/code labels) to a sidecar TSV, for back-porting
// GUI renames of globals. Row: addr \t name \t comment?  (EOL/plate comment at that addr, if any)
// Arg0 (optional): output path. Default sidecar/labels.export.tsv
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.symbol.*;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DumpLabels extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = (args.length > 0) ? args[0]
                : "/home/matt/Tach-play/decomp/sidecar/labels.export.tsv";
        PrintWriter w = new PrintWriter(new FileWriter(outPath));
        w.println("# Tachyon sidecar — exported user-defined labels. Format: addr\\tname\\tcomment");
        SymbolIterator it = currentProgram.getSymbolTable().getAllSymbols(true);
        int n = 0;
        while (it.hasNext()) {
            Symbol s = it.next();
            if (s.getSource() != SourceType.USER_DEFINED) continue;
            if (s.getSymbolType() != SymbolType.LABEL) continue;
            if (s.isExternal()) continue;
            CodeUnit cu = currentProgram.getListing().getCodeUnitAt(s.getAddress());
            String c = null;
            if (cu != null) {
                c = cu.getComment(CodeUnit.EOL_COMMENT);
                if (c == null) c = cu.getComment(CodeUnit.PLATE_COMMENT);
            }
            String comment = (c == null) ? "" : c.replace("\r", "").replace("\n", "\\n");
            w.println(s.getAddress() + "\t" + s.getName(true) + (comment.isEmpty() ? "" : "\t" + comment));
            n++;
        }
        w.close();
        println("DumpLabels: wrote " + n + " labels -> " + outPath);
    }
}
