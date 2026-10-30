
uint FUN_0048e120(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = DAT_005897e4 / 0x32;
  if ((DAT_005897e4 % 0x32 == 0) && (iVar2 = 0, uVar1 = DAT_0056aab4, 0 < (int)DAT_0056aab0)) {
    puVar3 = (undefined4 *)(DAT_0056aab4 + 4);
    do {
      FUN_0048e0c0(DAT_0056aab8,iVar2,*(undefined4 *)*puVar3,param_1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
      uVar1 = DAT_0056aab0;
    } while (iVar2 < (int)DAT_0056aab0);
  }
  return uVar1;
}

