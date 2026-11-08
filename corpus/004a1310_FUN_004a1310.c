
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a1310(LPCSTR param_1)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_006038b4 == 0) {
    if (GLBL_maybe_pff_base != 0) goto LAB_004a1387;
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1338;
  }
  else {
LAB_004a1338:
    uVar1 = openfile(param_1);
    if (GLBL_some_file_failure == 0) {
      if (GLBL_cb_log_file_io_probably != (code *)0x0) {
        (*GLBL_cb_log_file_io_probably)(param_1,0,0,1);
      }
      DAT_006038b0 = 0;
      DAT_00603900 = 0;
      _DAT_00603904 = 0;
      DAT_00603908 = (int *)0x0;
      return uVar1;
    }
    if (GLBL_maybe_pff_base != 0) {
LAB_004a1387:
      pCVar2 = param_1;
      if (DAT_006038ac != 0) {
        pCVar2 = (LPCSTR)get_actual_filename_from_pff(param_1,GLBL_maybe_pff_base);
      }
      uVar1 = FUN_004a3fd0(pCVar2);
      if (*(int *)(GLBL_maybe_pff_base + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably != (code *)0x0) {
          (*GLBL_cb_log_file_io_probably)(param_1,GLBL_maybe_pff_base + 4,0,1);
        }
        DAT_00603900 = 0;
        _DAT_00603904 = 0;
        DAT_00603908 = (int *)0x0;
        DAT_006038b0 = 1;
        return uVar1;
      }
    }
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1438;
  }
  piVar4 = &DAT_006038c0;
  iVar3 = 0;
  do {
    if (*piVar4 != 0) {
      pCVar2 = param_1;
      if (DAT_006038ac != 0) {
        pCVar2 = (LPCSTR)get_actual_filename_from_pff(param_1,*piVar4);
      }
      uVar1 = FUN_004a3fd0(pCVar2);
      if (*(int *)(*piVar4 + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably != (code *)0x0) {
          (*GLBL_cb_log_file_io_probably)(param_1,*piVar4 + 4,0,1);
        }
        DAT_00603908 = piVar4;
        _DAT_00603904 = iVar3;
        DAT_006038b0 = 0;
        DAT_00603900 = 1;
        return uVar1;
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
LAB_004a1438:
  show_dialog_on_cannot_open_file(param_1,s_file_OpenEx_0055e078);
  return 0xffffffff;
}

