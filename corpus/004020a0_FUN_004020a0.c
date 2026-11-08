
void FUN_004020a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  iVar1 = FUN_0048e800(DAT_005a6140,0x61);
  if (iVar1 != 0) {
    FUN_00436470(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8),
                 param_1 + 0xdc,local_c0);
    uVar2 = FUN_00426840(param_2);
    str_sprintf(local_80,iVar1,local_c0,uVar2);
    SrvSend_TextMsg(local_80,1,0,0,0,*(undefined4 *)(param_1 + 100),0xffffffff);
  }
  return;
}

