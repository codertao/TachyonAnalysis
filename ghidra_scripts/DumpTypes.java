// Dump user structures/typedefs/enums from the program's data type manager to a text file.
// Arg: output path (default decomp/sidecar/types.export.txt)
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class DumpTypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args.length > 0 ? args[0] : "sidecar/types.export.txt";
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        List<DataType> all = new ArrayList<>();
        dtm.getAllDataTypes().forEachRemaining(all::add);
        all.sort(Comparator.comparing(DataType::getPathName));
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            for (DataType dt : all) {
                String cat = dt.getCategoryPath().getPath();
                if (dt instanceof Structure s) {
                    pw.printf("struct %s  size=0x%x  cat=%s%n", s.getName(), s.getLength(), cat);
                    for (DataTypeComponent c : s.getDefinedComponents()) {
                        pw.printf("  +0x%03x  %-24s %s%s%n", c.getOffset(), c.getDataType().getDisplayName(),
                            c.getFieldName() == null ? "" : c.getFieldName(),
                            c.getComment() == null ? "" : "   // " + c.getComment());
                    }
                } else if (dt instanceof TypeDef t) {
                    pw.printf("typedef %s -> %s  cat=%s%n", t.getName(), t.getDataType().getDisplayName(), cat);
                } else if (dt instanceof ghidra.program.model.data.Enum e) {
                    pw.printf("enum %s size=%d cat=%s%n", e.getName(), e.getLength(), cat);
                } else if (dt instanceof Union u) {
                    pw.printf("union %s size=0x%x cat=%s%n", u.getName(), u.getLength(), cat);
                }
            }
        }
        println("DumpTypes: wrote " + out);
    }
}
