
/* sweep */

void BW_MsgBaseLevelUp(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = Rtxt_GetText(DAT_005a6140,0x115,param_2);
  str_sprintf(local_80,s__s___d__0053360c,uVar1);
  SrvSend_TextMsg(local_80,0,0x10,0,*param_1,0,DAT_005a6320._1_1_);
  SrvSend_UiSound(3,0x1d,0,0x10,*param_1,0xffffffff,0,0);
  return;
}

