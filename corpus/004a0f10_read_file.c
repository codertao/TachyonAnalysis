
int read_file(undefined4 param_1)

{
  int iVar1;
  undefined4 size_bytes;
  
  iVar1 = openfile(param_1);
  if (iVar1 == -1) {
    GLBL_some_file_failure = 1;
    if (GLBL_cb_log_file_io_probably != (code *)0x0) {
      (*GLBL_cb_log_file_io_probably)(param_1,0,0,0);
    }
    return -1;
  }
  size_bytes = move_to_end_of_file_and_get_len(0,2);
  move_to_end_of_file_and_get_len(0,0);
  iVar1 = mem_GetMemEx_probably_alloc(size_bytes,4,0,s_LOADED_FILE_0055e06c);
  if (iVar1 == 0) {
    close_glbl_open_file();
    if (GLBL_cb_log_file_io_probably != (code *)0x0) {
      (*GLBL_cb_log_file_io_probably)(param_1,0,0,0);
    }
    GLBL_some_file_failure = 0;
    return 0;
  }
  read_file_to_bin(iVar1,size_bytes);
  close_glbl_open_file();
  GLBL_last_file_read_bytes = size_bytes;
  if (GLBL_cb_log_file_io_probably != (code *)0x0) {
    (*GLBL_cb_log_file_io_probably)(param_1,0,size_bytes,1);
  }
  GLBL_some_file_failure = 0;
  return iVar1;
}

