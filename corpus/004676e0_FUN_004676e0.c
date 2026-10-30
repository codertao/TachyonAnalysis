
int FUN_004676e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = DAT_005b9080;
  do {
    iVar1 = FUN_004c67c0(param_1,iVar3);
    if (iVar1 == 0) {
      return iVar3;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x144;
  } while (uVar2 < 0x10);
  return 0;
}

