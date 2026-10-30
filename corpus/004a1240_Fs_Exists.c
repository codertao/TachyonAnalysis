
/* mount-aware file-exists(name): File_Exists + PFF mounts (used to count %02d.job/.nws/.wng/.mpc)
    */

undefined4 Fs_Exists(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_006038b4 == 0) {
    if (DAT_006038a8 == 0) {
      uVar1 = param_1;
      if (DAT_0060390c != 0) goto LAB_004a12c0;
      goto LAB_004a1263;
    }
LAB_004a1284:
    uVar1 = param_1;
    if (DAT_006038ac != 0) {
      uVar1 = FUN_004a11c0(param_1,DAT_006038a8);
    }
    uVar1 = FUN_004a3f90(uVar1);
    if (*(int *)(DAT_006038a8 + 0xb4) == 0) {
      return uVar1;
    }
  }
  else {
LAB_004a1263:
    uVar1 = File_Exists(param_1);
    if (DAT_006038b8 == 0) {
      return uVar1;
    }
    if (DAT_006038a8 != 0) goto LAB_004a1284;
  }
  if (DAT_0060390c == 0) {
    return uVar1;
  }
LAB_004a12c0:
  piVar2 = &DAT_006038c0;
  iVar3 = 0;
  do {
    if (*piVar2 != 0) {
      uVar1 = param_1;
      if (DAT_006038ac != 0) {
        uVar1 = FUN_004a11c0(param_1,*piVar2);
      }
      uVar1 = FUN_004a3f90(uVar1);
      if (*(int *)(*piVar2 + 0xb4) == 0) {
        return uVar1;
      }
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return uVar1;
    }
  } while( true );
}

