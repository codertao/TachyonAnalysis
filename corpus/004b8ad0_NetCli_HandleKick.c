
/* type 7 -> callback 0x6af5ac(reason) */

void NetCli_HandleKick(int param_1)

{
  if (DAT_006af5ac != (code *)0x0) {
    (*DAT_006af5ac)(*(undefined1 *)(param_1 + 4));
  }
  return;
}

