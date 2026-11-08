
int FUN_00469a30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_005896fc;
  if (DAT_005896f8 != 0) {
    do {
      iVar1 = str_cmp(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x74;
    } while (uVar3 < DAT_005896f8);
  }
  return 0;
}

