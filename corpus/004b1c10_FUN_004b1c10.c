
void FUN_004b1c10(int param_1,int *param_2)

{
  undefined1 local_18 [24];
  
  FUN_0052db6a(local_18,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c));
  FUN_0052dbcd(local_18);
  FUN_004b24d0(param_2,param_2);
  *param_2 = *param_2 + *(int *)(param_1 + 0x1c);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x20);
  param_2[2] = param_2[2] + *(int *)(param_1 + 0x24);
  return;
}

