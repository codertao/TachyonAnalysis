
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eab0(void)

{
  int iVar1;
  
  iVar1 = DAT_005636a4;
  while (iVar1 != 0) {
    DAT_005636a4 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_0049ea00(*(undefined4 *)(iVar1 + 0x10));
      FUN_0049c530(*(undefined4 *)(iVar1 + 0x18));
    }
    FUN_0049c530(iVar1);
    iVar1 = DAT_005636a4;
  }
  DAT_005636a4 = 0;
  _DAT_005636a8 = 0;
  DAT_00571288 = 0;
  return;
}

