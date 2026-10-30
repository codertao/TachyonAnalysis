
void FUN_0042ee20(void)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = File_Exists(s_KBCC_BIN_0053cad4);
  if (iVar1 != 0) {
    FUN_004a0e10(s_KBCC_BIN_0053cad4);
    FUN_004a0ed0(0,0);
    FUN_004a0ea0(&local_4,3);
    FUN_004a0ec0();
  }
  if ((char)local_4 != '\0') {
    str_sprintf(&DAT_005b0060,s__s__s_0053cacc,s_def_keys_00536d64,&local_4);
    iVar1 = FUN_004a3f90(&DAT_005b0060,DAT_005a6190);
    if (iVar1 != 0) {
      return;
    }
  }
  str_sprintf(&DAT_005b0060,s__s__s_0053cacc,s_def_keys_00536d64,&PTR_DAT_00536d60);
  return;
}

