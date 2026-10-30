// Apply canonical names/comments from the sidecar into the project.
// Reads a TSV: <addr-hex> \t <name> \t <comment?>   (comment optional; encode newlines as \n)
// '#' comment lines and blank lines ignored. Addr may be 0x-prefixed or bare hex.
// Arg 0 (optional): path to names.tsv. Default sidecar/names.tsv
//@category Tachyon
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.FileReader;

public class ApplyNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String path = (args.length > 0) ? args[0] : "/home/matt/Tach-play/decomp/sidecar/names.tsv";
        int named = 0, commented = 0, labeled = 0, missing = 0, lines = 0;
        BufferedReader br = new BufferedReader(new FileReader(path));
        String line;
        while ((line = br.readLine()) != null) {
            String raw = line.trim();
            if (raw.isEmpty() || raw.startsWith("#")) continue;
            lines++;
            String[] p = line.split("\t", 3);
            String addrStr = p[0].trim();
            if (addrStr.startsWith("0x") || addrStr.startsWith("0X")) addrStr = addrStr.substring(2);
            Address a;
            try { a = toAddr(Long.parseLong(addrStr, 16)); } catch (Exception e) { continue; }
            String name = (p.length > 1) ? p[1].trim() : "";
            String comment = (p.length > 2) ? p[2].replace("\\n", "\n") : null;

            Function f = getFunctionAt(a);
            if (f != null) {
                if (!name.isEmpty()) { f.setName(name, SourceType.USER_DEFINED); named++; }
                if (comment != null && !comment.isEmpty()) { f.setComment(comment); commented++; }
            } else if (!name.isEmpty()) {
                // data / non-function address: apply a primary label
                createLabel(a, name, true, SourceType.USER_DEFINED);
                labeled++;
                if (comment != null && !comment.isEmpty()) {
                    setPlateComment(a, comment);
                    commented++;
                }
            } else {
                missing++;
            }
        }
        br.close();
        println("ApplyNames: lines=" + lines + " funcNamed=" + named + " labeled=" + labeled
                + " comments=" + commented + " skipped=" + missing);
    }
}
