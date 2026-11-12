
/* sweep: KBCC.BIN / def_keys */

void KeyCfg_LoadDefaults(void)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = File_Exists(s_KBCC_BIN_0053cad4);
  if (iVar1 != 0) {
    openfile(s_KBCC_BIN_0053cad4);
    move_to_end_of_file_and_get_len(0,0);
    read_file_to_bin(&local_4,3);
    close_glbl_open_file();
  }
  if ((char)local_4 != '\0') {
    str_sprintf(&DAT_005b0060,s__s__s_0053cacc,s_def_keys_00536d64,&local_4);
    iVar1 = Pff_Exists(&DAT_005b0060,DAT_005a6190);
    if (iVar1 != 0) {
      return;
    }
  }
  str_sprintf(&DAT_005b0060,s__s__s_0053cacc,s_def_keys_00536d64,&PTR_DAT_00536d60);
  return;
}

