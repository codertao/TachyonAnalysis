
/* avoidance suppressed within 6000 units of attack target */

void Ai_ApproachTarget(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    Ai_ReturnToDefault(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    iVar2 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34));
    if (iVar2 < 0x28a000) {
      FUN_004022a0(param_1,iVar1);
    }
    if (iVar2 < 0x1770000) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      *(code **)(param_1 + 0x6c) = Ai_CollisionLookahead;
    }
    if (iVar2 < 0x1b58000) {
      *(short *)(param_1 + 0x312) = *(short *)(param_1 + 0xf4) * -0xcc + 0x400;
    }
    else {
      *(undefined2 *)(param_1 + 0x312) = 0x400;
    }
    FUN_0040f380((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34),param_1 + 0xdc);
  }
  return;
}

