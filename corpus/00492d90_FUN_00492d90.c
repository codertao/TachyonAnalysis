
void FUN_00492d90(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_74;
  int local_70;
  undefined4 local_60;
  undefined2 local_5a;
  vec3 local_58 [2];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_28 [24];
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  FUN_004b19f0(param_1 + 0x18);
  uVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)&DAT_005b9600);
  if (uVar3 < 0x1388001) {
    clr_bytes(&local_74,0x4c);
    local_60 = *(undefined4 *)(param_1 + 0xd4);
    local_70 = *(int *)(param_1 + 0x1c) << 1;
    local_34 = DAT_0056562c;
    local_40 = ((vec3 *)(param_1 + 0x4c))->x;
    local_3c = *(undefined4 *)(param_1 + 0x50);
    local_38 = *(undefined4 *)(param_1 + 0x54);
    local_74 = 0x94;
    local_5a = 0xffff;
    iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + 0x9c);
    local_10 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
    FUN_004b1bb0(local_28,(vec3 *)(param_1 + 0x4c));
    iVar4 = -(*(int *)(*(int *)(param_1 + 0xdc) + 0x9c) >> 1);
    piVar5 = &DAT_005656c8;
    param_1 = 0x10;
    do {
      lVar1 = (longlong)*piVar5 * (longlong)*(int *)(iVar2 + 0x1c);
      local_58[0].x = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      local_c = *(int *)(iVar2 + 0x1c);
      local_8 = piVar5[1];
      local_58[0].y =
           (uint)((longlong)local_8 * (longlong)local_c) >> 0x10 |
           (int)((ulonglong)((longlong)local_8 * (longlong)local_c) >> 0x20) << 0x10;
      local_58[0].z = iVar4;
      call_copy_mathresult_to_global(local_28);
      some_rotate_by_global(local_58,local_58);
      local_58[0].x = local_58[0].x + *(int *)(iVar2 + 0x34);
      local_58[0].y = local_58[0].y + *(int *)(iVar2 + 0x38);
      local_58[0].z = local_58[0].z + *(int *)(iVar2 + 0x3c);
      FUN_004b19a0(&local_74);
      FUN_004b19f0(&local_74);
      iVar4 = iVar4 + local_10;
      piVar5 = piVar5 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

