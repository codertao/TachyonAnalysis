// Dump per-function classification evidence to a TSV:
//   addr  name  bytes  ncallers  callers(names)  callees(names, incl. imports)  strings  dataRefs
// Usage: -postScript FnEvidence.java <out.tsv>
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class FnEvidence extends GhidraScript {
    private String esc(String s) {
        return s.replace("\t", "\\t").replace("\n", "\\n").replace("\r", "\\r");
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args.length > 0 ? args[0] : "fn_evidence.tsv";
        Listing listing = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            FunctionIterator it = fm.getFunctions(true);
            while (it.hasNext()) {
                Function f = it.next();
                if (f.isExternal()) continue;
                Address ep = f.getEntryPoint();
                long bytes = f.getBody().getNumAddresses();
                // callers
                TreeSet<String> callers = new TreeSet<>();
                int nData = 0;
                for (Reference r : rm.getReferencesTo(ep)) {
                    if (r.getReferenceType().isCall() || r.getReferenceType().isJump()) {
                        Function c = fm.getFunctionContaining(r.getFromAddress());
                        callers.add(c == null ? r.getFromAddress().toString() : c.getName());
                    } else if (r.getReferenceType().isData()) {
                        nData++;
                    }
                }
                // callees + strings
                TreeSet<String> callees = new TreeSet<>();
                LinkedHashSet<String> strs = new LinkedHashSet<>();
                InstructionIterator ii = listing.getInstructions(f.getBody(), true);
                while (ii.hasNext()) {
                    Instruction ins = ii.next();
                    for (Reference r : ins.getReferencesFrom()) {
                        Address to = r.getToAddress();
                        if (r.getReferenceType().isCall()) {
                            Function c = fm.getFunctionAt(to);
                            if (c == null) {
                                Symbol s = currentProgram.getSymbolTable().getPrimarySymbol(to);
                                callees.add(s == null ? to.toString() : s.getName());
                            } else {
                                callees.add(c.isThunk() && c.getThunkedFunction(true) != null
                                        ? c.getThunkedFunction(true).getName() : c.getName());
                            }
                        } else if (r.getReferenceType().isData() || r.getReferenceType().isIndirect()) {
                            Data d = listing.getDataAt(to);
                            if (d != null && d.hasStringValue()) {
                                Object v = d.getValue();
                                if (v != null) strs.add("\"" + esc(v.toString()) + "\"");
                            } else if (d != null && d.isPointer() && r.getReferenceType().isIndirect()) {
                                // indirect call through IAT
                                Symbol s = currentProgram.getSymbolTable().getPrimarySymbol(to);
                                if (s != null) callees.add(s.getName());
                            } else {
                                Symbol s = currentProgram.getSymbolTable().getPrimarySymbol(to);
                                if (s != null && s.getSource() != SourceType.DEFAULT
                                        && s.getSymbolType() == SymbolType.LABEL) {
                                    strs.add("&" + s.getName());
                                }
                            }
                        }
                    }
                }
                pw.println(ep + "\t" + f.getName() + "\t" + bytes + "\t" + callers.size() + "\t"
                        + String.join(",", callers) + "\t" + String.join(",", callees) + "\t"
                        + String.join(" ", strs) + "\t" + nData);
            }
        }
        println("FnEvidence wrote " + out);
    }
}
