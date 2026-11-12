
/* sweep */

void TachCli_OnServerTimeout(undefined4 param_1)

{
  undefined1 auStack_80 [128];
  
  str_sprintf(auStack_80,s_SERVER_TIMEOUT__d_SECONDS_00534324,param_1);
  TextBar_Add(auStack_80,DAT_005a6324 & 0xff);
  return;
}

