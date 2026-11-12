
/* sweep */

void Debug_Printf(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_80 [128];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_80,param_1,param_2);
    SrvSend_TextSimple(local_80,0);
  }
  return;
}

