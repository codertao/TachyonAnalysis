
void FUN_00497ed0(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  iVar2 = *(int *)(param_1 + 0xe0);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  lVar3 = (longlong)**(int **)(param_1 + 0xe4) * (longlong)*(int *)(iVar2 + 0xe0);
  local_14 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(*(int *)(param_1 + 0xe4) + 4) * (longlong)*(int *)(iVar2 + 0xe0);
  local_10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  local_8 = *(int *)(*(int *)(param_1 + 0xe4) + 8);
  lVar3 = (longlong)local_8 * (longlong)*(int *)(iVar2 + 0xe0);
  local_c = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  FUN_004b1bb0(local_44,iVar2 + 0x4c);
  FUN_004b24d0(&local_14,&local_14);
  local_18 = *(undefined4 *)(iVar2 + 0xd8);
  FUN_004b1bb0(local_44,&local_20);
  FUN_004b24d0(&local_14,&local_14);
  local_14 = local_14 + *(int *)(iVar2 + 0x34);
  local_10 = local_10 + *(int *)(iVar2 + 0x38);
  local_c = local_c + *(int *)(iVar2 + 0x3c);
  FUN_00494db0(param_1,&local_14,&local_2c,*(undefined4 *)(iVar1 + 0x54),
               *(undefined4 *)(iVar1 + 0x88));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  if (*(code **)(iVar1 + 0xb0) != (code *)0x0) {
    (**(code **)(iVar1 + 0xb0))(param_1,iVar1);
  }
  return;
}

