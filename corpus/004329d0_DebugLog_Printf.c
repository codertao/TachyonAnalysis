
/* sweep */

void DebugLog_Printf(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_80 [128];
  
  if (DAT_00562bc4 != 0) {
    str_sprintf(local_80,&DAT_0053cab4,param_1);
    iVar1 = c_fprintf(DAT_00562bc4,local_80,param_2);
    if (iVar1 < 0) {
      DAT_00562bc4 = 0;
    }
  }
  return;
}

