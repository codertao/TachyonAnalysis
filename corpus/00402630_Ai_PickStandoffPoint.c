
/* standoff point away from target (vs big ships, target class & 0x1c) */

void Ai_PickStandoffPoint(int param_1)

{
  vec3 *pvVar1;
  int iVar2;
  uint uVar3;
  vec3 local_10;
  
  iVar2 = *(int *)(param_1 + 0x90);
  pvVar1 = (vec3 *)(param_1 + 0x34);
  uVar3 = distance_between(pvVar1,(vec3 *)(iVar2 + 0x34));
  if (0x3e80000 < uVar3) {
    Ai_SetState(param_1,1);
    return;
  }
  local_10.x = pvVar1->x - *(int *)(iVar2 + 0x34);
  local_10.y = *(int *)(param_1 + 0x38) - *(int *)(iVar2 + 0x38);
  local_10.z = *(int *)(param_1 + 0x3c) - *(int *)(iVar2 + 0x3c);
  call_Vec_NormalizeFast(&local_10);
  local_10.x = (uint)((longlong)local_10.x * 0x4650000) >> 0x10 |
               (int)((ulonglong)((longlong)local_10.x * 0x4650000) >> 0x20) << 0x10;
  local_10.y = (uint)((longlong)local_10.y * 0x4650000) >> 0x10 |
               (int)((ulonglong)((longlong)local_10.y * 0x4650000) >> 0x20) << 0x10;
  local_10.z = (uint)((longlong)local_10.z * 0x4650000) >> 0x10 |
               (int)((ulonglong)((longlong)local_10.z * 0x4650000) >> 0x20) << 0x10;
  *(int *)(param_1 + 0x344) = local_10.x + pvVar1->x;
  *(int *)(param_1 + 0x348) = local_10.y + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0x3c) + local_10.z;
  Ai_StartStandoff(param_1);
  return;
}

