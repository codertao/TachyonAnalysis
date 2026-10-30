
int FUN_0041df50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (DAT_005b22e0 != 0) {
    iVar4 = DAT_005b22e4 + 0x10;
    iVar2 = DAT_005b22e4;
    do {
      iVar1 = FUN_004c67c0(iVar4,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x70;
      iVar4 = iVar4 + 0x70;
    } while (uVar3 < DAT_005b22e0);
  }
  return 0;
}

