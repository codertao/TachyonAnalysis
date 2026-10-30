
/* mount-aware file size(name): disk 0x4a0fe0 or PFF mount 0x4a4290 */

undefined4 Fs_GetSize(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_006038b4 == 0) {
    if (DAT_006038a8 != 0) goto LAB_004a1592;
    if (DAT_0060390c == 0) goto LAB_004a1572;
  }
  else {
LAB_004a1572:
    uVar1 = FUN_004a0fe0(param_1);
    if (DAT_006038b8 == 0) {
      return uVar1;
    }
    if (DAT_006038a8 != 0) {
LAB_004a1592:
      uVar1 = param_1;
      if (DAT_006038ac != 0) {
        uVar1 = FUN_004a11c0(param_1,DAT_006038a8);
      }
      uVar1 = FUN_004a4290(uVar1);
      if (*(int *)(DAT_006038a8 + 0xb4) == 0) {
        return uVar1;
      }
    }
    if (DAT_0060390c == 0) goto LAB_004a1607;
  }
  piVar2 = &DAT_006038c0;
  iVar3 = 0;
  do {
    if (*piVar2 != 0) {
      uVar1 = param_1;
      if (DAT_006038ac != 0) {
        uVar1 = FUN_004a11c0(param_1,*piVar2);
      }
      uVar1 = FUN_004a4290(uVar1);
      if (*(int *)(*piVar2 + 0xb4) == 0) {
        return uVar1;
      }
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
LAB_004a1607:
  FUN_004a1a60(param_1,s_file_FileSizeEx_0055e084);
  return 0xffffffff;
}

