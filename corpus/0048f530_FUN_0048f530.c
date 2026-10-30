
void FUN_0048f530(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0056aa94 != 0) {
    DAT_0056aa80 = Cbin_CountEntries(s_EQUATE_CATEGORIES_00559d9c,s_CATEGORY_00559db0);
    FUN_0048e3d0(&DAT_0056aa84,DAT_0056aa80 * 0x2c,4,s_VAR_EQUATE_CATEGORY_00559d88,DAT_0056aa90);
    Cbin_SelectGroup(s_EQUATE_CATEGORIES_00559d9c);
    uVar1 = 0;
    iVar2 = DAT_0056aa84;
    if (DAT_0056aa80 != 0) {
      do {
        FUN_0049b480(s_CATEGORY_00559db0,iVar2,0x20,0);
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (uVar1 < DAT_0056aa80);
    }
    uVar1 = 0;
    iVar2 = DAT_0056aa84;
    if (DAT_0056aa80 != 0) {
      do {
        FUN_0048f400(iVar2);
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (uVar1 < DAT_0056aa80);
    }
  }
  return;
}

