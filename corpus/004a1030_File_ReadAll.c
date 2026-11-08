
/* open, size via seek-end, read whole into buf; returns size */

undefined4 File_ReadAll(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = openfile(param_1);
  if (iVar1 == -1) {
    if (GLBL_cb_log_file_io_probably != (code *)0x0) {
      (*GLBL_cb_log_file_io_probably)(param_1,0,0,0);
    }
    GLBL_some_file_failure = 1;
    return 0xffffffff;
  }
  if (param_2 == 0) {
    uVar2 = move_to_end_of_file_and_get_len(0,2);
    close_glbl_open_file();
    GLBL_some_file_failure = 0;
    return uVar2;
  }
  uVar2 = move_to_end_of_file_and_get_len(0,2);
  move_to_end_of_file_and_get_len(0,0);
  read_file_to_bin(param_2,uVar2);
  close_glbl_open_file();
  if (GLBL_cb_log_file_io_probably != (code *)0x0) {
    (*GLBL_cb_log_file_io_probably)(param_1,0,uVar2,1);
  }
  GLBL_some_file_failure = 0;
  return uVar2;
}

