
void FUN_004581d0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = DAT_0058f2e4;
  if (DAT_0058f2e0 != 0) {
    do {
      FUN_00458180(iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (uVar1 < DAT_0058f2e0);
  }
  return;
}

