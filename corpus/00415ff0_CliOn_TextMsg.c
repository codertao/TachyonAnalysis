
/* S->C 0x1001 handler */

void CliOn_TextMsg(short *param_1)

{
  if (*param_1 == 0) {
    TextBar_Add(param_1 + 2,(int)param_1[1]);
    return;
  }
  if (DAT_005a6730 != 0) {
    DebugLog_Write(param_1 + 2);
  }
  maybe_log_something(param_1 + 2,0x32);
  MsgLog_Add(param_1 + 2,0xffffffff);
  return;
}

