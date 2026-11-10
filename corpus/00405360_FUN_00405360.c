
void FUN_00405360(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  local_24.x = 0;
  local_24.y = 0x1f4000;
  local_24.z = -0x1388000;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x58);
    if (pcVar2 == (code *)0x0) {
      local_30.x = *(int *)(iVar1 + 0x34);
      local_30.y = *(int *)(iVar1 + 0x38);
      local_30.z = *(int *)(iVar1 + 0x3c);
    }
    else {
      (*pcVar2)(iVar1,2,&local_30);
    }
    FUN_004b1bb0(local_18,(vec3 *)(iVar1 + 0x4c));
    some_rotate_by_global(&local_24,&local_24);
    local_30.x = local_30.x + local_24.x;
    local_30.y = local_30.y + local_24.y;
    local_30.z = local_30.z + local_24.z;
    uVar3 = distance_between((vec3 *)(param_1 + 0x34),&local_30);
    if (uVar3 < 0x3e8000) {
      *(code **)(param_1 + 0x304) = FUN_00405280;
    }
    FUN_0040f380((vec3 *)(param_1 + 0x34),&local_30,param_1 + 0xdc);
  }
  return;
}

