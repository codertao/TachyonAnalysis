
undefined4 get_file_len(undefined4 param_1)

{
  int iVar1;
  undefined4 file_len;
  
  iVar1 = openfile(param_1);
  if (iVar1 == -1) {
    GLBL_some_file_failure = 1;
    return 0xffffffff;
  }
  file_len = move_to_end_of_file_and_get_len(0,2);
  close_glbl_open_file();
  GLBL_some_file_failure = 0;
  return file_len;
}

