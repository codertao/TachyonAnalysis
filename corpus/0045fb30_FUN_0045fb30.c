
void FUN_0045fb30(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_80 [128];
  
  if (param_1 != param_2) {
    iVar1 = FUN_0048e800(DAT_005a6140,0x78);
    if (iVar1 != 0) {
      str_sprintf(local_80,iVar1,param_2 + 0xcc,param_1 + 0xcc);
      SrvSend_TextMsg(local_80,0,0,0,0xffffffff,*(undefined4 *)(*(int *)(param_1 + 200) + 100),
                      DAT_005a632c & 0xff);
    }
  }
  return;
}

