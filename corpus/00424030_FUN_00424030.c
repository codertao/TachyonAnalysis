
void FUN_00424030(int param_1,float param_2,int param_3,float *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong local_34;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_34._0_4_ = (int)(longlong)ROUND(param_2);
  local_24 = 0;
  local_20 = 0;
  local_1c = (int)local_34;
  FUN_004b1bb0(local_18,param_1 + 0x4c);
  FUN_004b24d0(&local_24,&local_24);
  iVar3 = *(int *)(param_1 + 0xa0) + local_24;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = iVar3;
  iVar4 = *(int *)(param_1 + 0xa4) + local_20;
  *(int *)(param_1 + 0xa4) = iVar4;
  iVar5 = *(int *)(param_1 + 0xa8) + local_1c;
  *(int *)(param_1 + 0xa8) = iVar5;
  local_2c = (int)(longlong)ROUND((float)iVar3 * *(float *)(param_3 + 0x3c));
  *piVar1 = local_2c;
  local_2c = (int)(longlong)ROUND((float)iVar4 * *(float *)(param_3 + 0x3c));
  *(int *)(param_1 + 0xa4) = local_2c;
  local_2c = (int)(longlong)ROUND((float)iVar5 * *(float *)(param_3 + 0x3c));
  *(int *)(param_1 + 0xa8) = local_2c;
  if (param_4 != (float *)0x0) {
    uVar2 = FUN_004e046f(piVar1);
    local_34 = (ulonglong)uVar2;
    *param_4 = (float)local_34;
  }
  return;
}

