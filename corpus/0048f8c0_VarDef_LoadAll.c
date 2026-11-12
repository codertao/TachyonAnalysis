
/* sweep */

void VarDef_LoadAll(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  DAT_0056aa88 = Cbin_CountEntries(s_VAR_CATEGORIES_00559df8,s_CATEGORY_00559db0);
  Mem_AllocZeroTagged(&DAT_0056aa8c,DAT_0056aa88 * 0x34,4,s_VAR_VAR_CATEGORY_00559de4,DAT_0056aa90);
  Cbin_SelectGroup(s_VAR_CATEGORIES_00559df8);
  uVar3 = 0;
  if (DAT_0056aa88 != 0) {
    iVar1 = DAT_0056aa8c + 0x30;
    iVar2 = DAT_0056aa8c;
    do {
      Cbin_FindParam_Global(s_CATEGORY_00559db0,iVar2,0x20,0,0,1);
      Cbin_GetParamN(s_CATEGORY_00559db0,0,0,iVar1,1,2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x34;
      iVar1 = iVar1 + 0x34;
    } while (uVar3 < DAT_0056aa88);
  }
  uVar3 = 0;
  iVar1 = DAT_0056aa8c;
  if (DAT_0056aa88 != 0) {
    do {
      VarDef_LoadCategory(iVar1);
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x34;
    } while (uVar3 < DAT_0056aa88);
  }
  return;
}

