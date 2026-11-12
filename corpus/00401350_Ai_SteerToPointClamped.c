
/* sweep: clamped (+-0x1000) yaw/pitch deltas toward a point; true when aligned */

bool Ai_SteerToPointClamped(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(int *)(param_2 + 4) * 0x80 + *(int *)(param_1 + 0x50) * -0x80 >> 10;
  uVar3 = *(int *)(param_2 + 8) * 0x80 + *(int *)(param_1 + 0x54) * -0x80 >> 10;
  if ((int)uVar1 < 0x1001) {
    if ((int)uVar1 < -0x1000) {
      uVar1 = 0xfffff000;
    }
  }
  else {
    uVar1 = 0x1000;
  }
  if ((int)uVar3 < 0x1001) {
    if ((int)uVar3 < -0x1000) {
      uVar3 = 0xfffff000;
    }
  }
  else {
    uVar3 = 0x1000;
  }
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar1;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar3;
  uVar2 = (*(int *)(param_3 + 4) - *(int *)(param_4 + 4)) - *(int *)(param_1 + 0x38) >> 3;
  if ((int)uVar2 < 0x801) {
    if ((int)uVar2 < -0x800) {
      uVar2 = 0xfffff800;
    }
  }
  else {
    uVar2 = 0x800;
  }
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar2;
  if (((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 0x8001) &&
     ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0x8001)) {
    return (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 9;
  }
  return false;
}

