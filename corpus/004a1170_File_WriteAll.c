
/* open-for-write, write buf[len], close */

undefined4 File_WriteAll(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = lcreat_file_and_do_error_stuff(param_1);
  if (iVar1 == -1) {
    GLBL_some_file_failure = 1;
    return 0xffffffff;
  }
  save_to_open_file(param_2,param_3);
  close_glbl_open_file();
  GLBL_some_file_failure = 0;
  return 0;
}

