
void FUN_0048f8c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  DAT_0056aa88 = Cbin_CountEntries(s_VAR_CATEGORIES_00559df8,s_CATEGORY_00559db0);
  FUN_0048e3d0(&DAT_0056aa8c,DAT_0056aa88 * 0x34,4,s_VAR_VAR_CATEGORY_00559de4,DAT_0056aa90);
  Cbin_SelectGroup(s_VAR_CATEGORIES_00559df8);
  uVar3 = 0;
  if (DAT_0056aa88 != 0) {
    iVar1 = DAT_0056aa8c + 0x30;
    iVar2 = DAT_0056aa8c;
    do {
      FUN_0049bdb0(s_CATEGORY_00559db0,iVar2,0x20,0,0,1);
      FUN_0049b930(s_CATEGORY_00559db0,0,0,iVar1,1,2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x34;
      iVar1 = iVar1 + 0x34;
    } while (uVar3 < DAT_0056aa88);
  }
  uVar3 = 0;
  iVar1 = DAT_0056aa8c;
  if (DAT_0056aa88 != 0) {
    do {
      FUN_0048f750(iVar1);
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x34;
    } while (uVar3 < DAT_0056aa88);
  }
  return;
}

