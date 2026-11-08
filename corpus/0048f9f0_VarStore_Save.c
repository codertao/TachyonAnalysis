
/* write store back to a path */

void VarStore_Save(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = lcreat_file_and_do_error_stuff(param_1);
  if (iVar1 != -1) {
    save_to_open_file(param_2,*param_2);
    close_glbl_open_file();
    return;
  }
  return;
}

