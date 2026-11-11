// Apply the sidecar type definitions to the program.
//   sidecar/types/structs.tsv : structures (S rows) and their fields (F rows)
//   sidecar/types/sigs.tsv    : function prototypes  (addr <TAB> C prototype; "type name@EAX" = register param)
//   sidecar/types/globals.tsv : global data types    (addr <TAB> type)
// Arg: sidecar dir (default "sidecar"). Structs live in category /tachyon. An existing struct with the
// same name anywhere in the DTM is updated in place (replaceWith), so existing references keep working.
// TSVs win: re-running overwrites GUI edits to these structs/prototypes/globals.
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.data.DataTypeParser;
import ghidra.util.data.DataTypeParser.AllowedDataTypes;
import java.io.*;
import java.nio.file.*;
import java.util.*;
import java.util.regex.*;

public class ApplyTypes extends GhidraScript {
    static final CategoryPath CAT = new CategoryPath("/tachyon");
    DataTypeManager dtm;
    DataTypeParser parser;
    int warnings = 0;

    void warn(String s) { warnings++; println("WARN " + s); }

    List<String[]> rows(Path p) throws IOException {
        List<String[]> out = new ArrayList<>();
        if (!Files.exists(p)) return out;
        for (String line : Files.readAllLines(p)) {
            if (line.isBlank() || line.startsWith("#")) continue;
            out.add(line.split("\t", -1));
        }
        return out;
    }

    static long num(String s) { s = s.trim(); return s.startsWith("0x") ? Long.parseLong(s.substring(2), 16) : Long.parseLong(s); }

    Structure findStruct(String name) {
        List<DataType> found = new ArrayList<>();
        dtm.findDataTypes(name, found);
        for (DataType d : found) if (d instanceof Structure s && !(d instanceof Pointer)) return s;
        return null;
    }

    DataType parse(String t) throws Exception {
        t = t.trim();
        if (t.equals("code *")) t = "void *";
        DataType dt = parser.parse(t);
        if (dt == null) throw new Exception("cannot parse type '" + t + "'");
        return dt;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path dir = Paths.get(args.length > 0 ? args[0] : "sidecar", "types");
        dtm = currentProgram.getDataTypeManager();
        parser = new DataTypeParser(dtm, dtm, null, AllowedDataTypes.ALL);

        // ---- structs ----
        List<String[]> srows = rows(dir.resolve("structs.tsv"));
        LinkedHashMap<String, String[]> sdefs = new LinkedHashMap<>();
        Map<String, List<String[]>> fields = new HashMap<>();
        for (String[] r : srows) {
            if (r[0].equals("S")) { sdefs.put(r[1], r); fields.putIfAbsent(r[1], new ArrayList<>()); }
            else if (r[0].equals("F")) fields.computeIfAbsent(r[1], k -> new ArrayList<>()).add(r);
            else warn("bad struct row: " + String.join("|", r));
        }
        // pass 1: make sure every struct exists (placeholder of the right size) so pointers resolve
        Map<String, Structure> live = new HashMap<>();
        for (String[] s : sdefs.values()) {
            String name = s[1]; int size = (int) num(s[2]);
            Structure ex = findStruct(name);
            if (ex == null) {
                StructureDataType ph = new StructureDataType(CAT, name, size, dtm);
                ex = (Structure) dtm.addDataType(ph, DataTypeConflictHandler.REPLACE_HANDLER);
            }
            live.put(name, ex);
        }
        // pass 2: build contents (base first, since S rows are processed in file order)
        Map<String, StructureDataType> built = new HashMap<>();
        int nStructs = 0, nFields = 0;
        for (String[] s : sdefs.values()) {
            String name = s[1]; int size = (int) num(s[2]);
            String base = s.length > 3 ? s[3].trim() : "";
            String desc = s.length > 4 ? s[4] : "";
            StructureDataType nd = new StructureDataType(CAT, name, size, dtm);
            if (!desc.isEmpty()) nd.setDescription(desc);
            if (!base.isEmpty()) {
                StructureDataType b = built.get(base);
                if (b == null) { warn(name + ": base " + base + " not defined earlier"); }
                else for (DataTypeComponent c : b.getDefinedComponents())
                    nd.replaceAtOffset(c.getOffset(), c.getDataType(), c.getLength(), c.getFieldName(), c.getComment());
            }
            for (String[] f : fields.get(name)) {
                try {
                    int off = (int) num(f[2]);
                    DataType dt = parse(f[3]);
                    String fname = f[4].trim();
                    String cmt = f.length > 5 && !f[5].isBlank() ? f[5] : null;
                    int len = dt.getLength();
                    if (len <= 0) throw new Exception("zero-length type " + f[3]);
                    if (off + len > size) throw new Exception("field past end");
                    nd.replaceAtOffset(off, dt, len, fname, cmt);
                    nFields++;
                } catch (Exception e) { warn(name + " field " + String.join("|", f) + ": " + e.getMessage()); }
            }
            built.put(name, nd);
            Structure ex = live.get(name);
            ex.replaceWith(nd);
            if (!ex.getCategoryPath().equals(CAT)) ex.setCategoryPath(CAT);
            if (!desc.isEmpty()) ex.setDescription(desc);
            nStructs++;
        }

        // ---- globals ----
        int nGlobals = 0;
        for (String[] r : rows(dir.resolve("globals.tsv"))) {
            try {
                Address a = toAddr(num(r[0]));
                DataType dt = parse(r[1]);
                if (getFunctionContaining(a) != null || getInstructionContaining(a) != null)
                    throw new Exception("address is code");
                clearListing(a, a.add(dt.getLength() - 1));
                createData(a, dt);
                nGlobals++;
            } catch (Exception e) { warn("global " + String.join("|", r) + ": " + e.getMessage()); }
        }

        // ---- function prototypes ----
        Pattern proto = Pattern.compile("^(.*?)\\b(\\w+)\\s*\\((.*)\\)\\s*;?\\s*$");
        Pattern param = Pattern.compile("^(.*?)(\\w+)\\s*$");
        int nSigs = 0;
        for (String[] r : rows(dir.resolve("sigs.tsv"))) {
            try {
                Address a = toAddr(num(r[0]));
                Function fn = getFunctionAt(a);
                if (fn == null) throw new Exception("no function");
                Matcher m = proto.matcher(r[1].trim());
                if (!m.matches()) throw new Exception("bad prototype");
                DataType ret = parse(m.group(1));
                if (!fn.getName().equals(m.group(2)) && !fn.getName().startsWith("FUN_"))
                    warn(r[0] + ": prototype name " + m.group(2) + " != " + fn.getName() + " (names.tsv wins)");
                // params: "type name" (normal) or "type name@REG" (register storage, e.g. "int value@EAX").
                // If any param names a register the whole signature uses custom storage: register params
                // get their register, the rest get consecutive cdecl stack slots (+4, +8, ...).
                List<String[]> praw = new ArrayList<>();   // {type, name, reg-or-null}
                boolean custom = false;
                String plist = m.group(3).trim();
                if (!plist.isEmpty() && !plist.equals("void")) {
                    for (String p : plist.split(",")) {
                        p = p.trim(); String reg = null;
                        int at = p.lastIndexOf('@');
                        if (at > 0) { reg = p.substring(at + 1).trim(); p = p.substring(0, at).trim(); custom = true; }
                        Matcher pm = param.matcher(p);
                        if (!pm.matches() || pm.group(1).isBlank()) throw new Exception("bad param '" + p + "'");
                        praw.add(new String[] { pm.group(1), pm.group(2), reg });
                    }
                }
                List<ParameterImpl> ps = new ArrayList<>();
                int stackOff = 4;
                for (String[] pr : praw) {
                    DataType pdt = parse(pr[0]);
                    if (!custom) { ps.add(new ParameterImpl(pr[1], pdt, currentProgram)); continue; }
                    if (pr[2] != null) {
                        ghidra.program.model.lang.Register rg = currentProgram.getRegister(pr[2].toUpperCase());
                        if (rg == null) throw new Exception("unknown register " + pr[2]);
                        ps.add(new ParameterImpl(pr[1], pdt, rg, currentProgram));
                    } else {
                        ps.add(new ParameterImpl(pr[1], pdt, stackOff, currentProgram));
                        stackOff += Math.max(4, (pdt.getLength() + 3) & ~3);
                    }
                }
                String cc = fn.getCallingConventionName();
                if (cc == null || cc.equals("unknown") || cc.equals(Function.UNKNOWN_CALLING_CONVENTION_STRING)
                        || cc.equals(Function.DEFAULT_CALLING_CONVENTION_STRING)) cc = "__cdecl";
                if (custom) {
                    ReturnParameterImpl rp = (ret instanceof VoidDataType || ret.getLength() <= 0)
                        ? new ReturnParameterImpl(VoidDataType.dataType, ghidra.program.model.listing.VariableStorage.VOID_STORAGE, currentProgram)
                        : (ret.getLength() <= 4
                            ? new ReturnParameterImpl(ret, currentProgram.getRegister("EAX"), currentProgram)
                            : null);
                    if (rp == null) throw new Exception("custom storage: return types > 4 bytes not supported");
                    fn.updateFunction(cc, rp, ps, FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
                } else {
                    if (fn.hasCustomVariableStorage()) fn.setCustomVariableStorage(false);
                    fn.updateFunction(cc, new ReturnParameterImpl(ret, currentProgram), ps,
                        FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
                }
                nSigs++;
            } catch (Exception e) { warn("sig " + String.join("|", r) + ": " + e.getMessage()); }
        }
        println(String.format("ApplyTypes: structs=%d fields=%d globals=%d sigs=%d warnings=%d",
            nStructs, nFields, nGlobals, nSigs, warnings));
    }
}
