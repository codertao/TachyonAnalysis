
undefined4 FUN_0041ad70(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_005b29a0 != 0) {
    iVar2 = DAT_005b29a0;
    do {
      if (param_2 + -10 <= iVar3) {
        return 0;
      }
      uVar1 = FUN_0048e440(param_1,iVar2 + 0x34);
      if (uVar1 < 0x7d0000) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 200);
      iVar3 = iVar3 + 1;
    } while (iVar2 != 0);
  }
  return 0;
}

