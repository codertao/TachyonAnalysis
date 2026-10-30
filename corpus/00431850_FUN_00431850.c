
void FUN_00431850(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_80 [128];
  
  iVar2 = FUN_004c67c0(param_2,&DAT_0053f1e4);
  if (iVar2 != 0) {
    iVar2 = FUN_004316b0(param_2,param_5);
    if (iVar2 != -1) {
      iVar1 = *(int *)(param_5 + 8 + iVar2 * 0x28);
      param_1[2] = param_5;
      *param_1 = iVar1;
      param_1[1] = iVar2;
      return;
    }
    uVar3 = DAT_005aed50;
    uVar4 = DAT_005aed54;
    if (param_6 != 1) {
      uVar3 = DAT_005a6818;
      uVar4 = 0x80;
    }
    FUN_004b1b70(uVar3,uVar4,0x80,0x80,0x80);
    iVar2 = FUN_004b14b0(param_2,param_3,param_4);
    *param_1 = iVar2;
    FUN_00431720(param_5,param_1,param_2,param_6,param_4);
    iVar2 = *param_1;
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 2) == 0)) {
      str_sprintf(local_80,s_Pak__s_in_not_REMAPPED_0053f1cc,iVar2 + 0x70);
      FUN_004329a0(local_80);
    }
  }
  return;
}

