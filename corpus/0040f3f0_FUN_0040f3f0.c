
void FUN_0040f3f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_1c = 0;
  local_20 = 0x10000;
  FUN_004b1bb0(local_18,param_1);
  FUN_004b24d0(&local_24,&local_24);
  FUN_004b1be0(local_18,param_2);
  FUN_004b2410(&local_24,&local_24);
  uVar1 = FUN_004e086c(local_24,-local_20);
  *(undefined4 *)(param_2 + 8) = uVar1;
  return;
}

