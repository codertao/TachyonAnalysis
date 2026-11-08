
void FUN_00402630(int param_1)

{
  vec3 *pvVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x90);
  pvVar1 = (vec3 *)(param_1 + 0x34);
  uVar3 = distance_between(pvVar1,(vec3 *)(iVar2 + 0x34));
  if (0x3e80000 < uVar3) {
    FUN_00401080(param_1,1);
    return;
  }
  local_10 = pvVar1->x - *(int *)(iVar2 + 0x34);
  local_c = *(int *)(param_1 + 0x38) - *(int *)(iVar2 + 0x38);
  local_8 = *(int *)(param_1 + 0x3c) - *(int *)(iVar2 + 0x3c);
  FUN_004e054e(&local_10);
  local_10 = (uint)((longlong)(int)local_10 * 0x4650000) >> 0x10 |
             (int)((ulonglong)((longlong)(int)local_10 * 0x4650000) >> 0x20) << 0x10;
  local_c = (uint)((longlong)(int)local_c * 0x4650000) >> 0x10 |
            (int)((ulonglong)((longlong)(int)local_c * 0x4650000) >> 0x20) << 0x10;
  local_8 = (uint)((longlong)(int)local_8 * 0x4650000) >> 0x10 |
            (int)((ulonglong)((longlong)(int)local_8 * 0x4650000) >> 0x20) << 0x10;
  *(uint *)(param_1 + 0x344) = local_10 + pvVar1->x;
  *(uint *)(param_1 + 0x348) = local_c + *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x34c) = *(int *)(param_1 + 0x3c) + local_8;
  FUN_00402600(param_1);
  return;
}

