
bool FUN_00413a60(int param_1)

{
  uint uVar1;
  
  uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
  return uVar1 < *(uint *)(*(int *)(param_1 + 0x8c) + 0x15c);
}

