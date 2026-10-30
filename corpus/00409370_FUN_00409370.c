
int FUN_00409370(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_005b9808 != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_004c67c0(iVar2 + DAT_005b980c,param_2);
      if (iVar1 == 0) {
        return uVar3 * 0x80 + *(int *)(param_1 + 4);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar3 < DAT_005b9808);
  }
  return 0;
}

