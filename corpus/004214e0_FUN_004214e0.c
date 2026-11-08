
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004214e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 3;
  if (*(int *)(param_1 + 0x2c) < 1) {
    FUN_0041b8c0(param_1);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
  uVar2 = iVar1 + *(int *)(param_1 + 0x1c) * -4;
  uVar3 = (int)uVar2 >> 0x1f;
  if ((uVar2 ^ uVar3) - uVar3 < 0x400000) {
    _DAT_005b1ed8 = (float)*(int *)(param_1 + 0x2c) * _DAT_0052e744 + _DAT_005b1ed8;
  }
  return;
}

