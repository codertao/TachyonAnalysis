// Print a breakdown of the function inventory + how many functions have no code callers
// (i.e. are reachable only via data/pointer-table references).
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.RefType;

public class FnStats extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        long total = 0, external = 0, thunk = 0, normal = 0, noCallers = 0, dataRefOnly = 0;
        while (it.hasNext()) {
            Function f = it.next();
            total++;
            if (f.isExternal()) { external++; continue; }
            if (f.isThunk()) { thunk++; continue; }
            normal++;
            // examine references to the entry point
            boolean hasCallRef = false, hasDataRef = false;
            ReferenceIterator ri = currentProgram.getReferenceManager()
                    .getReferencesTo(f.getEntryPoint());
            boolean any = false;
            while (ri.hasNext()) {
                Reference r = ri.next();
                any = true;
                RefType rt = r.getReferenceType();
                if (rt.isCall()) hasCallRef = true;
                if (rt.isData()) hasDataRef = true;
            }
            if (!hasCallRef) noCallers++;
            if (!hasCallRef && hasDataRef) dataRefOnly++;
        }
        println("FnStats: total=" + total + " external=" + external + " thunk=" + thunk
                + " normal=" + normal);
        println("  normal funcs with NO call ref=" + noCallers
                + " | reachable ONLY via data/table ref=" + dataRefOnly);
    }
}
