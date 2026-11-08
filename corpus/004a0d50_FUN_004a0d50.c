
undefined4 FUN_004a0d50(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = GLBL_open_file_error_flag;
  GLBL_open_file_error_flag = param_1;
  return uVar1;
}

