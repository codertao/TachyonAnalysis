
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a56b0(void)

{
  HGLOBAL pvVar1;
  
  if (DAT_00564898 != 0) {
    if (*(int *)((int)DAT_00564894 + 0x10) == 5) {
      FUN_004a5aa0();
    }
    if (*(int *)((int)DAT_00564894 + 0x10) == 4) {
      FUN_004a5900();
    }
    if (*(int *)((int)DAT_00564894 + 0x10) == 1) {
      FUN_004a5760();
    }
    if (*(LPCVOID *)((int)DAT_00564894 + 0x2c) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)DAT_00564894 + 0x2c));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)DAT_00564894 + 0x2c));
      GlobalFree(pvVar1);
    }
    LocalFree(DAT_00564894);
    DAT_00564894 = (HLOCAL)0x0;
    DAT_00564898 = 0;
    _DAT_005648a0 = 0;
    DAT_005648a4 = 0;
    DAT_005648a8 = 0;
    DAT_005648c8 = 0;
    _DAT_005648d0 = 0;
    FUN_004a5c80();
  }
  return;
}

