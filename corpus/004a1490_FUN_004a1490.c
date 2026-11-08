
void FUN_004a1490(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00603900 != 0) {
    read_some_bytes_and_update_seek_ptr(param_1,param_2,*DAT_00603908);
    return;
  }
  if (DAT_006038b0 != 0) {
    read_some_bytes_and_update_seek_ptr(param_1,param_2,GLBL_maybe_pff_base);
    return;
  }
  read_file_to_bin(param_1,param_2);
  return;
}

