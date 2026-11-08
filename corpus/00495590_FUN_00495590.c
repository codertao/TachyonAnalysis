
void FUN_00495590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = 0;
  FUN_004b1bb0(local_18,(vec3 *)(param_1 + 0x4c));
  local_24.z = *(int *)(*(int *)(param_1 + 0xdc) + 0x9c);
  some_rotate_by_global(&local_24,&local_24);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0xf8);
  while (iVar1 != 0) {
    iVar3 = iVar3 + local_24.y;
    iVar2 = iVar2 + local_24.x;
    *(int *)(iVar1 + 0x34) = iVar2;
    *(int *)(iVar1 + 0x38) = iVar3;
    iVar4 = iVar4 + local_24.z;
    *(int *)(iVar1 + 0x3c) = iVar4;
    *(int *)(iVar1 + 0x4c) = ((vec3 *)(param_1 + 0x4c))->x;
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(iVar1 + 0xf8);
  }
  return;
}

