
void FUN_00465320(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x8c);
  FUN_004b1bb0(local_18,param_1 + 0x4c);
  FUN_004b24d0(iVar1 + 0x5bc,param_3);
  *param_3 = *param_3 + *(int *)(param_1 + 0x34);
  param_3[1] = param_3[1] + *(int *)(param_1 + 0x38);
  param_3[2] = param_3[2] + *(int *)(param_1 + 0x3c);
  return;
}

