
void FUN_004a1a60(undefined4 param_1,LPCSTR param_2)

{
  CHAR local_80 [128];
  
  if (DAT_006038bc != 0) {
    if (DAT_00603910 != (code *)0x0) {
      (*DAT_00603910)(param_1,param_2);
      return;
    }
    str_sprintf(local_80,s_Cannot_open_file__s_0053f368,param_1);
    MessageBoxA(DAT_0060395c,local_80,param_2,0);
  }
  return;
}

