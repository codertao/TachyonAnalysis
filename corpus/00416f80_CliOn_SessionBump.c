
/* S->C 0x1033 handler */

void CliOn_SessionBump(undefined4 *param_1)

{
  NetCli_RaiseSessionSeq(*param_1);
  return;
}

