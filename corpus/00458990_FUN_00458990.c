
void FUN_00458990(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
    if (uVar1 < 0x64000) {
      FUN_004588e0(param_1,GLBL_SOME_CONTEXT);
    }
  }
  return;
}

