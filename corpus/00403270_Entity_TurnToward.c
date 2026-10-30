
/* orientation controller: drives angular velocity +0xac/b0/b4 so orientation (3 Euler angles)
   +0x4c/50/54 converges to desired orientation (param2, e.g. +0xdc); max turn rate =
   def+0x84+{0xc,0x1c,0x2c}; angular-accel cap +-0x400/frame; param4&1 = quarter-rate. NOT linear
   velocity */

void Entity_TurnToward(int param_1,int *param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  iVar2 = *param_2 * 0x80 + *(int *)(param_1 + 0x4c) * -0x80;
  uVar3 = iVar2 >> 7;
  uVar4 = iVar2 >> 0x1f;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < (int)((uVar3 ^ uVar4) - uVar4)) {
    uVar4 = *(uint *)(param_3 + 0xc);
    if ((param_4 & 1) == 0) {
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = -uVar4;
        goto joined_r0x004032ee;
      }
LAB_004032f0:
      uVar5 = uVar4;
    }
    else {
      uVar5 = (int)uVar4 >> 2;
      if ((int)uVar3 <= (int)uVar5) {
        uVar4 = (int)-uVar4 >> 2;
joined_r0x004032ee:
        uVar5 = uVar3;
        if ((int)uVar3 < (int)uVar4) goto LAB_004032f0;
      }
    }
    iVar2 = (int)(uVar5 * 0x80 + uVar1 * -0x80) >> 7;
    if (iVar2 < 0x401) {
      if (iVar2 < -0x400) {
        iVar2 = -0x400;
      }
    }
    else {
      iVar2 = 0x400;
    }
    *(uint *)(param_1 + 0xac) = uVar1 + iVar2;
  }
  else {
    *(uint *)(param_1 + 0xac) = ((int)((uVar3 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0xb0);
  iVar2 = param_2[1] * 0x80 + *(int *)(param_1 + 0x50) * -0x80;
  uVar3 = iVar2 >> 7;
  uVar4 = iVar2 >> 0x1f;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < (int)((uVar3 ^ uVar4) - uVar4)) {
    uVar4 = *(uint *)(param_3 + 0x1c);
    if ((param_4 & 1) == 0) {
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = -uVar4;
        goto joined_r0x00403392;
      }
LAB_00403394:
      uVar5 = uVar4;
    }
    else {
      uVar5 = (int)uVar4 >> 2;
      if ((int)uVar3 <= (int)uVar5) {
        uVar4 = (int)-uVar4 >> 2;
joined_r0x00403392:
        uVar5 = uVar3;
        if ((int)uVar3 < (int)uVar4) goto LAB_00403394;
      }
    }
    iVar2 = (int)(uVar5 * 0x80 + uVar1 * -0x80) >> 7;
    if (iVar2 < 0x401) {
      if (iVar2 < -0x400) {
        iVar2 = -0x400;
      }
    }
    else {
      iVar2 = 0x400;
    }
    *(uint *)(param_1 + 0xb0) = uVar1 + iVar2;
  }
  else {
    *(uint *)(param_1 + 0xb0) = ((int)((uVar3 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0xb4);
  iVar2 = param_2[2] * 0x80 + *(int *)(param_1 + 0x54) * -0x80;
  uVar3 = iVar2 >> 7;
  if ((int)((uVar3 ^ iVar2 >> 0x1f) - (iVar2 >> 0x1f)) <=
      (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
    *(int *)(param_1 + 0xb4) = iVar2 >> 8;
    return;
  }
  uVar4 = *(uint *)(param_3 + 0x2c);
  if ((param_4 & 1) == 0) {
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = -uVar4;
      goto joined_r0x0040342d;
    }
  }
  else {
    uVar5 = (int)uVar4 >> 2;
    if ((int)uVar5 < (int)uVar3) goto LAB_00403431;
    uVar4 = (int)-uVar4 >> 2;
joined_r0x0040342d:
    uVar5 = uVar3;
    if ((int)uVar4 <= (int)uVar3) goto LAB_00403431;
  }
  uVar5 = uVar4;
LAB_00403431:
  iVar2 = (int)(uVar5 * 0x80 + uVar1 * -0x80) >> 7;
  if (0x400 < iVar2) {
    *(uint *)(param_1 + 0xb4) = uVar1 + 0x400;
    return;
  }
  if (iVar2 < -0x400) {
    iVar2 = -0x400;
  }
  *(uint *)(param_1 + 0xb4) = uVar1 + iVar2;
  return;
}

