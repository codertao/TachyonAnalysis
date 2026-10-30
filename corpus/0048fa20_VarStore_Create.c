
/* [tentative] */

int * VarStore_Create(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *local_4;
  
  iVar2 = FUN_0048f9d0();
  iVar2 = (iVar2 + 2 + DAT_0056aa88 * 2) * 4;
  FUN_0048e3d0(&local_4,iVar2,4,s_VAR_SAVE_BUFFER_00559e08,DAT_0056aa90);
  *local_4 = iVar2;
  local_4[1] = DAT_0056aa88;
  uVar4 = 0;
  piVar3 = local_4 + 2;
  if (DAT_0056aa88 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x24 + DAT_0056aa8c);
      *piVar3 = iVar1;
      piVar3[1] = iVar1 * 4 + 8;
      piVar3 = piVar3 + iVar1 + 2;
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (uVar4 < DAT_0056aa88);
  }
  return local_4;
}

