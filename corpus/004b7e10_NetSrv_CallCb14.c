
/* refine: callback slot 14 (0x6af7c0); Tachyon registers Nop */

void NetSrv_CallCb14(undefined4 param_1,undefined4 param_2)

{
  if (DAT_006af7c0 != (code *)0x0) {
    (*DAT_006af7c0)(param_1,param_2);
  }
  return;
}

