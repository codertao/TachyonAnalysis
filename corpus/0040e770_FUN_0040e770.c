
bool FUN_0040e770(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 0x8c) + 0xb0) != 0) && (((byte)DAT_005b2154 & 0x10) == 0)) {
    return false;
  }
  uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
  return uVar1 < *(uint *)(*(int *)(param_1 + 0x8c) + 0xb4);
}

