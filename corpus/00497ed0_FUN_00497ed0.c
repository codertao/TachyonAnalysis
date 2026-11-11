
void FUN_00497ed0(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vec3 local_20;
  vec3 local_14;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  iVar2 = *(int *)(param_1 + 0xe0);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20.x = 0;
  local_20.y = 0;
  local_20.z = 0;
  lVar3 = (longlong)**(int **)(param_1 + 0xe4) * (longlong)*(int *)(iVar2 + 0xe0);
  local_14.x = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(*(int *)(param_1 + 0xe4) + 4) * (longlong)*(int *)(iVar2 + 0xe0);
  local_14.y = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  local_8 = *(int *)(*(int *)(param_1 + 0xe4) + 8);
  lVar3 = (longlong)local_8 * (longlong)*(int *)(iVar2 + 0xe0);
  local_14.z = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  FUN_004b1bb0(local_44,(vec3 *)(iVar2 + 0x4c));
  some_rotate_by_global(&local_14,&local_14);
  local_20.z = *(int *)(iVar2 + 0xd8);
  FUN_004b1bb0(local_44,&local_20);
  some_rotate_by_global(&local_14,&local_14);
  local_14.x = local_14.x + *(int *)(iVar2 + 0x34);
  local_14.y = local_14.y + *(int *)(iVar2 + 0x38);
  local_14.z = local_14.z + *(int *)(iVar2 + 0x3c);
  Proj_SteerToward(param_1,&local_14,&local_2c,*(undefined4 *)(iVar1 + 0x54),
                   *(undefined4 *)(iVar1 + 0x88));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  if (*(code **)(iVar1 + 0xb0) != (code *)0x0) {
    (**(code **)(iVar1 + 0xb0))(param_1,iVar1);
  }
  return;
}

