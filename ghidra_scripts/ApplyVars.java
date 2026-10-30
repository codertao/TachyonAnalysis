// Apply canonical local/param variable names (and optional types) from the sidecar into the project.
// Reads a TSV: funcAddr \t kind \t storage \t pc \t name \t datatype?
//   - funcAddr: entry point hex (0x-prefixed or bare)
//   - kind:     param|local (informational; matching is by storage then pc)
//   - storage:  VariableStorage.toString() key, e.g. "Stack[-0x8]:4" or "EAX:4"
//   - pc:       symbol PC address hex, or "-" if none (disambiguates reused storage)
//   - name:     desired variable name
//   - datatype: optional; applied only if resolvable here, else type left unchanged
// '#'/blank lines ignored. Arg0 (optional): path to vars.tsv. Default sidecar/vars.tsv
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.pcode.HighSymbol;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class ApplyVars extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String path = (args.length > 0) ? args[0]
                : "/home/matt/Tach-play/decomp/sidecar/vars.tsv";

        // group rows by function address so we decompile each function at most once
        Map<String, List<String[]>> byFunc = new LinkedHashMap<>();
        BufferedReader br = new BufferedReader(new FileReader(path));
        String line;
        int rows = 0;
        while ((line = br.readLine()) != null) {
            String raw = line.trim();
            if (raw.isEmpty() || raw.startsWith("#")) continue;
            String[] p = line.split("\t", -1);
            if (p.length < 5) continue;
            byFunc.computeIfAbsent(p[0].trim(), k -> new ArrayList<>()).add(p);
            rows++;
        }
        br.close();

        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);

        int applied = 0, typed = 0, funcMiss = 0, varMiss = 0;
        for (Map.Entry<String, List<String[]>> e : byFunc.entrySet()) {
            if (monitor.isCancelled()) break;
            Address a = parseAddr(e.getKey());
            if (a == null) { funcMiss++; continue; }
            Function f = getFunctionAt(a);
            if (f == null) { funcMiss++; continue; }
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            if (r == null || r.getHighFunction() == null) { funcMiss++; continue; }
            HighFunction hf = r.getHighFunction();

            // index this function's high symbols by storage key
            Map<String, List<HighSymbol>> byStorage = new HashMap<>();
            Iterator<HighSymbol> syms = hf.getLocalSymbolMap().getSymbols();
            while (syms.hasNext()) {
                HighSymbol s = syms.next();
                byStorage.computeIfAbsent(s.getStorage().toString(), k -> new ArrayList<>()).add(s);
            }

            for (String[] p : e.getValue()) {
                String storage = p[2].trim();
                String pc = p[3].trim();
                String name = p[4].trim();
                String dtName = (p.length > 5) ? p[5].trim() : "";
                if (name.isEmpty()) continue;

                List<HighSymbol> cand = byStorage.get(storage);
                if (cand == null || cand.isEmpty()) { varMiss++; continue; }
                HighSymbol target = null;
                if (cand.size() == 1) {
                    target = cand.get(0);
                } else {
                    for (HighSymbol s : cand) {
                        Address spc = s.getPCAddress();
                        String spcs = (spc == null) ? "-" : spc.toString();
                        if (spcs.equals(pc)) { target = s; break; }
                    }
                    if (target == null) target = cand.get(0);
                }

                DataType dt = target.getDataType(); // default: leave type unchanged
                if (!dtName.isEmpty()) {
                    DataType found = resolveType(dtName);
                    if (found != null) { dt = found; typed++; }
                }
                try {
                    HighFunctionDBUtil.updateDBVariable(target, name, dt, SourceType.USER_DEFINED);
                    applied++;
                } catch (Exception ex) {
                    varMiss++;
                }
            }
        }
        di.dispose();
        println("ApplyVars: rows=" + rows + " applied=" + applied + " typed=" + typed
                + " funcMiss=" + funcMiss + " varMiss=" + varMiss);
    }

    private Address parseAddr(String s) {
        s = s.trim();
        if (s.startsWith("0x") || s.startsWith("0X")) s = s.substring(2);
        try { return toAddr(Long.parseLong(s, 16)); } catch (Exception e) { return null; }
    }

    private DataType resolveType(String name) {
        ArrayList<DataType> list = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, list);
        return list.isEmpty() ? null : list.get(0);
    }
}
