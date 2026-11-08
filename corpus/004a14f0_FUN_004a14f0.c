
void FUN_004a14f0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00603900 != 0) {
    FUN_004a4070(param_1,param_2,*DAT_00603908);
    return;
  }
  if (DAT_006038b0 != 0) {
    FUN_004a4070(param_1,param_2,GLBL_maybe_pff_base);
    return;
  }
  move_to_end_of_file_and_get_len(param_1,param_2);
  return;
}

