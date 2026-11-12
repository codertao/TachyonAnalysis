
/* sweep */

void Kill_SendMsgKilledBy(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  if (param_1 != param_2) {
    uVar1 = global_bad_shift_rng();
    iVar2 = Rtxt_GetText(DAT_005a6140,(uVar1 & 7) + 0x70);
    if (iVar2 != 0) {
      str_sprintf(local_80,iVar2,param_2 + 0xcc,param_1 + 0xcc);
      SrvSend_TextMsg(local_80,0,0,0,0xffffffff,*(undefined4 *)(*(int *)(param_1 + 200) + 100),
                      DAT_005a632c & 0xff);
    }
  }
  return;
}

