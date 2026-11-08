
LPCSTR load_a_file_probably(LPCSTR file_name)

{
  LPCSTR pCVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_006038b4 == 0) {
    if (GLBL_maybe_pff_base != 0) goto LAB_004a1689;
    pCVar1 = file_name;
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1647;
  }
  else {
LAB_004a1647:
    pCVar1 = (LPCSTR)read_file(file_name);
    if (GLBL_some_file_failure == 0) {
      if (GLBL_cb_log_file_io_probably == (code *)0x0) {
        return pCVar1;
      }
      (*GLBL_cb_log_file_io_probably)(file_name,0,GLBL_last_file_read_bytes,1);
      return pCVar1;
    }
    if (GLBL_maybe_pff_base != 0) {
LAB_004a1689:
      pCVar1 = file_name;
      if (DAT_006038ac != 0) {
        pCVar1 = (LPCSTR)get_actual_filename_from_pff(file_name,GLBL_maybe_pff_base);
      }
      pCVar1 = (LPCSTR)probably_load_from_pff(pCVar1);
      if (*(int *)(GLBL_maybe_pff_base + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably == (code *)0x0) {
          return pCVar1;
        }
        (*GLBL_cb_log_file_io_probably)
                  (file_name,GLBL_maybe_pff_base + 4,*(undefined4 *)(GLBL_maybe_pff_base + 0xb0),1);
        return pCVar1;
      }
    }
    if (GLBL_show_error_dialogs == 0) goto LAB_004a172f;
  }
  piVar3 = &DAT_006038c0;
  iVar2 = 0;
  do {
    if (*piVar3 != 0) {
      pCVar1 = file_name;
      if (DAT_006038ac != 0) {
        pCVar1 = (LPCSTR)get_actual_filename_from_pff(file_name,*piVar3);
      }
      pCVar1 = (LPCSTR)probably_load_from_pff(pCVar1);
      if (*(int *)(*piVar3 + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably == (code *)0x0) {
          return pCVar1;
        }
        (*GLBL_cb_log_file_io_probably)(file_name,*piVar3 + 4,*(undefined4 *)(*piVar3 + 0xb0),1);
        return pCVar1;
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
LAB_004a172f:
  if (GLBL_cb_log_file_io_probably != (code *)0x0) {
    (*GLBL_cb_log_file_io_probably)(file_name,0,0,0);
  }
  show_dialog_on_cannot_open_file(file_name,s_file_LoadFileEx_0055e094);
  return pCVar1;
}

