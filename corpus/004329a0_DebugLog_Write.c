
/* sweep */

void DebugLog_Write(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00562bc4 != 0) {
    iVar1 = c_fprintf(DAT_00562bc4,&DAT_0053cab4,param_1);
    if (iVar1 < 0) {
      DAT_00562bc4 = 0;
    }
  }
  return;
}

