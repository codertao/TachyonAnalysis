
undefined4 FUN_004a1620(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_006038b4 == 0) {
    if (DAT_006038a8 != 0) goto LAB_004a1689;
    uVar1 = param_1;
    if (DAT_0060390c == 0) goto LAB_004a1647;
  }
  else {
LAB_004a1647:
    uVar1 = FUN_004a0f10(param_1);
    if (DAT_006038b8 == 0) {
      if (DAT_00564004 == (code *)0x0) {
        return uVar1;
      }
      (*DAT_00564004)(param_1,0,DAT_006038a4,1);
      return uVar1;
    }
    if (DAT_006038a8 != 0) {
LAB_004a1689:
      uVar1 = param_1;
      if (DAT_006038ac != 0) {
        uVar1 = FUN_004a11c0(param_1,DAT_006038a8);
      }
      uVar1 = FUN_004a4130(uVar1);
      if (*(int *)(DAT_006038a8 + 0xb4) == 0) {
        if (DAT_00564004 == (code *)0x0) {
          return uVar1;
        }
        (*DAT_00564004)(param_1,DAT_006038a8 + 4,*(undefined4 *)(DAT_006038a8 + 0xb0),1);
        return uVar1;
      }
    }
    if (DAT_0060390c == 0) goto LAB_004a172f;
  }
  piVar3 = &DAT_006038c0;
  iVar2 = 0;
  do {
    if (*piVar3 != 0) {
      uVar1 = param_1;
      if (DAT_006038ac != 0) {
        uVar1 = FUN_004a11c0(param_1,*piVar3);
      }
      uVar1 = FUN_004a4130(uVar1);
      if (*(int *)(*piVar3 + 0xb4) == 0) {
        if (DAT_00564004 == (code *)0x0) {
          return uVar1;
        }
        (*DAT_00564004)(param_1,*piVar3 + 4,*(undefined4 *)(*piVar3 + 0xb0),1);
        return uVar1;
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
LAB_004a172f:
  if (DAT_00564004 != (code *)0x0) {
    (*DAT_00564004)(param_1,0,0,0);
  }
  FUN_004a1a60(param_1,s_file_LoadFileEx_0055e094);
  return uVar1;
}

