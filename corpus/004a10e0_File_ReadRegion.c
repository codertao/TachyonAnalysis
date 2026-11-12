
/* sweep */

undefined4
File_ReadRegion(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  move_to_end_of_file_and_get_len(param_3,0);
  uVar2 = read_file_to_bin(param_2,param_4);
  close_glbl_open_file();
  if (GLBL_cb_log_file_io_probably != (code *)0x0) {
    (*GLBL_cb_log_file_io_probably)(param_1,0,param_4,1);
  }
  GLBL_some_file_failure = 0;
  return uVar2;
}

