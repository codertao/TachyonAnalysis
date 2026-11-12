
/* sweep */

void Sped_BroadcastNamedMsg
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  Sped_FormatName(param_1,param_2,param_3,local_c0);
  iVar1 = Rtxt_GetText(DAT_005a6140,param_4);
  if (iVar1 != 0) {
    str_sprintf(local_80,iVar1,local_c0);
    __strupr(local_80);
    SrvSend_TextMsg(local_80,1,0,0,0,param_5,0xffffffff);
  }
  return;
}

