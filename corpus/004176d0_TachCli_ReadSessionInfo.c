
/* sweep */

void TachCli_ReadSessionInfo(int param_1)

{
  DAT_006af650 = *(undefined4 *)(param_1 + 4);
  DAT_006af654 = *(undefined2 *)(param_1 + 8);
  DAT_006af656 = *(undefined1 *)(param_1 + 10);
  Voice_Connect();
  return;
}

