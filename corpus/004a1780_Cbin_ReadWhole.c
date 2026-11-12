
/* mount-aware whole-file read (Cbin-only); File_ReadAll + PFF mount 0x4a41c0; tag
   "file:RawLoaderEx" */

undefined4 Cbin_ReadWhole(LPCSTR param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  int *piVar4;
  
  uVar1 = param_2;
  if (DAT_006038b4 == 0) {
    if (GLBL_maybe_pff_base != 0) goto LAB_004a17cd;
    uVar2 = param_2;
    if (GLBL_show_error_dialogs == 0) goto LAB_004a17ab;
  }
  else {
LAB_004a17ab:
    uVar2 = File_ReadAll(param_1,param_2);
    if (GLBL_some_file_failure == 0) {
      return uVar2;
    }
    if (GLBL_maybe_pff_base != 0) {
LAB_004a17cd:
      pCVar3 = param_1;
      if (DAT_006038ac != 0) {
        pCVar3 = (LPCSTR)get_actual_filename_from_pff(param_1,param_2,GLBL_maybe_pff_base);
      }
      uVar2 = Pff_ReadWholeEntry(pCVar3);
      if (*(int *)(GLBL_maybe_pff_base + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably == (code *)0x0) {
          return uVar2;
        }
        (*GLBL_cb_log_file_io_probably)
                  (param_1,GLBL_maybe_pff_base + 4,*(undefined4 *)(GLBL_maybe_pff_base + 0xb0),1);
        return uVar2;
      }
    }
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1883;
  }
  piVar4 = &DAT_006038c0;
  param_2 = 0;
  do {
    if (*piVar4 != 0) {
      pCVar3 = param_1;
      if (DAT_006038ac != 0) {
        pCVar3 = (LPCSTR)get_actual_filename_from_pff(param_1,uVar1,*piVar4);
      }
      uVar2 = Pff_ReadWholeEntry(pCVar3);
      if (*(int *)(*piVar4 + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably == (code *)0x0) {
          return uVar2;
        }
        (*GLBL_cb_log_file_io_probably)(param_1,*piVar4 + 4,*(undefined4 *)(*piVar4 + 0xb0),1);
        return uVar2;
      }
    }
    piVar4 = piVar4 + 1;
    param_2 = param_2 + 1;
  } while (param_2 < 0x10);
LAB_004a1883:
  if (GLBL_cb_log_file_io_probably != (code *)0x0) {
    (*GLBL_cb_log_file_io_probably)(param_1,0,0,0);
  }
  show_dialog_on_cannot_open_file(param_1,s_file_RawLoaderEx_0055e0a4);
  return uVar2;
}

