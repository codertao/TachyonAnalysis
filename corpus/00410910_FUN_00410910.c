
void FUN_00410910(float param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_20;
  undefined1 local_18 [24];
  
  iVar3 = (int)param_1;
  FUN_0052db6a(local_18,*(undefined4 *)((int)param_1 + 0x4c),*(undefined4 *)((int)param_1 + 0x50),
               *(undefined4 *)((int)param_1 + 0x54));
  FUN_0052dbcd(local_18);
  if (*(int *)((int)param_1 + 0xc4) == 0) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x58) + 0x48);
  }
  else {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xc4) + 0x48);
  }
  if (iVar5 == 0) {
    *param_2 = *(int *)((int)param_1 + 0x34);
    param_2[1] = *(int *)((int)param_1 + 0x38);
    param_2[2] = *(int *)((int)param_1 + 0x3c);
    return;
  }
  if ((*(byte *)((int)param_1 + 0x18) & 0x10) == 0) {
    param_1 = 65536.0;
  }
  else {
    param_1 = (float)*(int *)((int)param_1 + 0x1c);
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x18);
    uVar4 = FUN_0048e350();
    uVar4 = (uVar4 >> 4) % (*(int *)(iVar5 + 0xc) - 1U);
    piVar1 = (int *)(iVar2 + uVar4 * 0x48);
    local_20 = (int)(longlong)ROUND(param_1 * **(float **)(iVar2 + uVar4 * 0x48));
    *param_2 = local_20;
    local_20 = (int)(longlong)ROUND(param_1 * *(float *)(*piVar1 + 4));
    param_2[1] = local_20;
    local_20 = (int)(longlong)ROUND(param_1 * *(float *)(*piVar1 + 8));
    param_2[2] = local_20;
    FUN_004b24d0(param_2,param_2);
  }
  *param_2 = *param_2 + *(int *)(iVar3 + 0x34);
  param_2[1] = param_2[1] + *(int *)(iVar3 + 0x38);
  param_2[2] = param_2[2] + *(int *)(iVar3 + 0x3c);
  return;
}

