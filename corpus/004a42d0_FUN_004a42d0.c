
void FUN_004a42d0(undefined4 param_1,int param_2)

{
  CHAR local_80 [128];
  
  if (*(int *)(param_2 + 0xb8) != 0) {
    str_sprintf(local_80,s_Error_reading__s_in_PFF_file__s__0055e158,param_1,param_2 + 4);
    MessageBoxA(DAT_0060395c,local_80,s_pffmgr_0055e150,0);
  }
  return;
}

