// Remove a user-defined label by address + name. Args: <addr-hex> <name>
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.*;

public class RemoveLabel extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Address addr = toAddr(a[0]);
        int n = 0;
        for (Symbol s : currentProgram.getSymbolTable().getSymbols(addr)) {
            if (s.getSymbolType() == SymbolType.LABEL && s.getName().equals(a[1])) {
                s.delete(); n++;
            }
        }
        if (n > 0) currentProgram.getListing().setComment(addr, ghidra.program.model.listing.CodeUnit.EOL_COMMENT, null);
        println("RemoveLabel: removed " + n + " '" + a[1] + "' at " + addr);
    }
}
