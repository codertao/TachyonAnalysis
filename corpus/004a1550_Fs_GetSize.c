
/* mount-aware file size(name): disk 0x4a0fe0 or PFF mount 0x4a4290 */

undefined4 Fs_GetSize(LPCSTR param_1)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_006038b4 == 0) {
    if (GLBL_maybe_pff_base != 0) goto LAB_004a1592;
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1572;
  }
  else {
LAB_004a1572:
    uVar1 = get_file_len(param_1);
    if (GLBL_some_file_failure == 0) {
      return uVar1;
    }
    if (GLBL_maybe_pff_base != 0) {
LAB_004a1592:
      pCVar2 = param_1;
      if (DAT_006038ac != 0) {
        pCVar2 = (LPCSTR)get_actual_filename_from_pff(param_1,GLBL_maybe_pff_base);
      }
      uVar1 = FUN_004a4290(pCVar2);
      if (*(int *)(GLBL_maybe_pff_base + 0xb4) == 0) {
        return uVar1;
      }
    }
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1607;
  }
  piVar3 = &DAT_006038c0;
  iVar4 = 0;
  do {
    if (*piVar3 != 0) {
      pCVar2 = param_1;
      if (DAT_006038ac != 0) {
        pCVar2 = (LPCSTR)get_actual_filename_from_pff(param_1,*piVar3);
      }
      uVar1 = FUN_004a4290(pCVar2);
      if (*(int *)(*piVar3 + 0xb4) == 0) {
        return uVar1;
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
LAB_004a1607:
  show_dialog_on_cannot_open_file(param_1,s_file_FileSizeEx_0055e084);
  return 0xffffffff;
}

