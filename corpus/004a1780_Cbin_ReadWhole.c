
/* mount-aware whole-file read (Cbin-only); File_ReadAll + PFF mount 0x4a41c0; tag
   "file:RawLoaderEx" */

undefined4 Cbin_ReadWhole(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = param_2;
  if (DAT_006038b4 == 0) {
    if (DAT_006038a8 != 0) goto LAB_004a17cd;
    uVar2 = param_2;
    if (DAT_0060390c == 0) goto LAB_004a17ab;
  }
  else {
LAB_004a17ab:
    uVar2 = File_ReadAll(param_1,param_2);
    if (DAT_006038b8 == 0) {
      return uVar2;
    }
    if (DAT_006038a8 != 0) {
LAB_004a17cd:
      uVar2 = param_1;
      if (DAT_006038ac != 0) {
        uVar2 = FUN_004a11c0(param_1,param_2,DAT_006038a8);
      }
      uVar2 = FUN_004a41c0(uVar2);
      if (*(int *)(DAT_006038a8 + 0xb4) == 0) {
        if (DAT_00564004 == (code *)0x0) {
          return uVar2;
        }
        (*DAT_00564004)(param_1,DAT_006038a8 + 4,*(undefined4 *)(DAT_006038a8 + 0xb0),1);
        return uVar2;
      }
    }
    if (DAT_0060390c == 0) goto LAB_004a1883;
  }
  piVar3 = &DAT_006038c0;
  param_2 = 0;
  do {
    if (*piVar3 != 0) {
      uVar2 = param_1;
      if (DAT_006038ac != 0) {
        uVar2 = FUN_004a11c0(param_1,uVar1,*piVar3);
      }
      uVar2 = FUN_004a41c0(uVar2);
      if (*(int *)(*piVar3 + 0xb4) == 0) {
        if (DAT_00564004 == (code *)0x0) {
          return uVar2;
        }
        (*DAT_00564004)(param_1,*piVar3 + 4,*(undefined4 *)(*piVar3 + 0xb0),1);
        return uVar2;
      }
    }
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 1;
  } while (param_2 < 0x10);
LAB_004a1883:
  if (DAT_00564004 != (code *)0x0) {
    (*DAT_00564004)(param_1,0,0,0);
  }
  FUN_004a1a60(param_1,s_file_RawLoaderEx_0055e0a4);
  return uVar2;
}

