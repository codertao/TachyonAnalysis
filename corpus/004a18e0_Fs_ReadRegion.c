
/* mount-aware read-region(name,dst,fileOff,len): disk 0x4a10e0 (_llseek/_lread) or PFF mount
   0x4a4230 */

undefined4 Fs_ReadRegion(LPCSTR param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  int iVar5;
  
  uVar2 = param_4;
  uVar1 = param_3;
  if (DAT_006038b4 == 0) {
    if (GLBL_maybe_pff_base != 0) goto LAB_004a1937;
    uVar3 = param_2;
    if (GLBL_show_error_dialogs == 0) goto LAB_004a190f;
  }
  else {
LAB_004a190f:
    uVar3 = File_ReadRegion(param_1,param_2,param_3,param_4);
    if (GLBL_some_file_failure == 0) {
      return uVar3;
    }
    if (GLBL_maybe_pff_base != 0) {
LAB_004a1937:
      pCVar4 = param_1;
      uVar3 = param_2;
      if (DAT_006038ac != 0) {
        pCVar4 = (LPCSTR)get_actual_filename_from_pff
                                   (param_1,param_2,param_3,param_4,GLBL_maybe_pff_base);
      }
      uVar3 = Pff_ReadEntryRegion(pCVar4,uVar3);
      if (*(int *)(GLBL_maybe_pff_base + 0xb4) == 0) {
        iVar5 = GLBL_maybe_pff_base;
        if (GLBL_cb_log_file_io_probably == (code *)0x0) {
          return uVar3;
        }
LAB_004a1a41:
        (*GLBL_cb_log_file_io_probably)(param_1,iVar5 + 4,*(undefined4 *)(iVar5 + 0xb0),1);
        return uVar3;
      }
    }
    if (GLBL_show_error_dialogs == 0) goto LAB_004a1a07;
  }
  param_4 = &DAT_006038c0;
  param_3 = 0;
  do {
    if (*param_4 != 0) {
      pCVar4 = param_1;
      uVar3 = param_2;
      if (DAT_006038ac != 0) {
        pCVar4 = (LPCSTR)get_actual_filename_from_pff(param_1,param_2,uVar1,uVar2,*param_4);
      }
      uVar3 = Pff_ReadEntryRegion(pCVar4,uVar3);
      if (*(int *)(*param_4 + 0xb4) == 0) {
        if (GLBL_cb_log_file_io_probably == (code *)0x0) {
          return uVar3;
        }
        iVar5 = *param_4;
        goto LAB_004a1a41;
      }
    }
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
  } while (param_3 < 0x10);
LAB_004a1a07:
  if (GLBL_cb_log_file_io_probably != (code *)0x0) {
    (*GLBL_cb_log_file_io_probably)(param_1,0,0,0);
  }
  show_dialog_on_cannot_open_file(param_1,s_file_RawLoadBlockEx_0055e0b8);
  return uVar3;
}

