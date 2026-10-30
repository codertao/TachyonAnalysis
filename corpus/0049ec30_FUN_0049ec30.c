
undefined4 FUN_0049ec30(void)

{
  int iVar1;
  
  if (DAT_00603e20 != DAT_00603e24) {
    iVar1 = DAT_00603e20 * 4;
    DAT_00603e20 = DAT_00603e20 + 1 & 0x7f;
    return *(undefined4 *)(&DAT_00603c20 + iVar1);
  }
  return 0;
}

