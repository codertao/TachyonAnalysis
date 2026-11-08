
int FUN_00498020(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = -0x10000;
  iVar1 = DcbPool_Alloc(&DAT_005b32b0,0x12,*(undefined4 *)(param_1 + 100));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined **)(iVar1 + 0xe4) = &DAT_0055a4a8 + param_3 * 0xc;
  *(int *)(iVar1 + 0xe0) = param_1;
  *(undefined4 *)(iVar1 + 0xd4) = param_2;
  *(undefined4 *)(iVar1 + 0x58) = DAT_00565518;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(code **)(iVar1 + 0x68) = FUN_00497ed0;
  *(undefined2 *)(iVar1 + 0x74) = 1;
  *(code **)(iVar1 + 0x70) = FUN_00492d30;
  uVar2 = global_bad_shift_rng();
  iVar3 = (uVar2 & 7) + 2;
  FUN_004b1bb0(local_18,(vec3 *)(param_1 + 0x4c));
  some_rotate_by_global(&local_24,&local_24);
  *(int *)(iVar1 + 0x34) = iVar3 * local_24.x + *(int *)(param_1 + 0x34);
  *(int *)(iVar1 + 0x38) = iVar3 * local_24.y + *(int *)(param_1 + 0x38);
  *(int *)(iVar1 + 0x3c) = iVar3 * local_24.z + *(int *)(param_1 + 0x3c);
  *(int *)(iVar1 + 0x4c) = ((vec3 *)(param_1 + 0x4c))->x;
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  FUN_0041b850(iVar1);
  return iVar1;
}

