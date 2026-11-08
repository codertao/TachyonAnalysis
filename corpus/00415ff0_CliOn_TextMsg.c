
/* S->C 0x1001 handler */

void CliOn_TextMsg(short *param_1)

{
  if (*param_1 == 0) {
    FUN_0048ce30(param_1 + 2,(int)param_1[1]);
    return;
  }
  if (DAT_005a6730 != 0) {
    FUN_004329a0(param_1 + 2);
  }
  maybe_log_something(param_1 + 2,0x32);
  FUN_00450520(param_1 + 2,0xffffffff);
  return;
}

