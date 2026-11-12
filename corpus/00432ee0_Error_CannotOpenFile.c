
/* sweep */

void Error_CannotOpenFile(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_Cannot_open_file__s_0053f368,param_1);
  if (DAT_005a6788 == 0) {
    Error_Report(local_80,param_2);
    return;
  }
  Error_Report(local_80,DAT_005a6788);
  return;
}

