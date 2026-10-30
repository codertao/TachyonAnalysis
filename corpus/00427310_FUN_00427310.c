
undefined4 FUN_00427310(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = 0;
  *param_4 = 0;
  if ((param_1 != -1) && (param_2 != -1)) {
    if ((*(int *)(*(int *)(param_3 + 0x3c) + 0x3c) != param_1) ||
       (*(int *)(*(int *)(param_3 + 0x3c) + 0x40) != param_2)) {
      uVar1 = FUN_00427210(param_2,param_1,param_3,param_3,0,&local_4,0);
      *param_4 = uVar1;
      if (local_4 != 0) {
        return *(undefined4 *)(local_4 + 0x78);
      }
    }
  }
  return 0;
}

