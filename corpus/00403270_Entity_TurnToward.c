
/* orientation controller: drives angular velocity +0xac/b0/b4 so orientation (3 Euler angles)
   +0x4c/50/54 converges to desired orientation (param2, e.g. +0xdc); max turn rate =
   def+0x84+{0xc,0x1c,0x2c}; angular-accel cap +-0x400/frame; param4&1 = quarter-rate. NOT linear
   velocity */

void __cdecl Entity_TurnToward(SpED *ent,vec3 *desiredAng,ShipFlight *flight,byte skill)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  uVar1 = (ent->angVel).x;
  iVar3 = desiredAng->x * 0x80 + (ent->ang).x * -0x80;
  fVar4 = (float)(iVar3 >> 7);
  uVar5 = iVar3 >> 0x1f;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
      (int)(((uint)fVar4 ^ uVar5) - uVar5)) {
    fVar2 = flight->yawScaled;
    if ((skill & 1) == 0) {
      if ((int)fVar4 <= (int)fVar2) {
        fVar2 = (float)-(int)fVar2;
        goto joined_r0x004032ee;
      }
LAB_004032f0:
      fVar6 = fVar2;
    }
    else {
      fVar6 = (float)((int)fVar2 >> 2);
      if ((int)fVar4 <= (int)fVar6) {
        fVar2 = (float)(-(int)fVar2 >> 2);
joined_r0x004032ee:
        fVar6 = fVar4;
        if ((int)fVar4 < (int)fVar2) goto LAB_004032f0;
      }
    }
    iVar3 = (int)((int)fVar6 * 0x80 + uVar1 * -0x80) >> 7;
    if (iVar3 < 0x401) {
      if (iVar3 < -0x400) {
        iVar3 = -0x400;
      }
    }
    else {
      iVar3 = 0x400;
    }
    (ent->angVel).x = uVar1 + iVar3;
  }
  else {
    (ent->angVel).x = ((int)(((uint)fVar4 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
  }
  uVar1 = (ent->angVel).y;
  iVar3 = desiredAng->y * 0x80 + (ent->ang).y * -0x80;
  fVar4 = (float)(iVar3 >> 7);
  uVar5 = iVar3 >> 0x1f;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
      (int)(((uint)fVar4 ^ uVar5) - uVar5)) {
    fVar2 = flight->pitchScaled;
    if ((skill & 1) == 0) {
      if ((int)fVar4 <= (int)fVar2) {
        fVar2 = (float)-(int)fVar2;
        goto joined_r0x00403392;
      }
LAB_00403394:
      fVar6 = fVar2;
    }
    else {
      fVar6 = (float)((int)fVar2 >> 2);
      if ((int)fVar4 <= (int)fVar6) {
        fVar2 = (float)(-(int)fVar2 >> 2);
joined_r0x00403392:
        fVar6 = fVar4;
        if ((int)fVar4 < (int)fVar2) goto LAB_00403394;
      }
    }
    iVar3 = (int)((int)fVar6 * 0x80 + uVar1 * -0x80) >> 7;
    if (iVar3 < 0x401) {
      if (iVar3 < -0x400) {
        iVar3 = -0x400;
      }
    }
    else {
      iVar3 = 0x400;
    }
    (ent->angVel).y = uVar1 + iVar3;
  }
  else {
    (ent->angVel).y = ((int)(((uint)fVar4 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
  }
  uVar1 = (ent->angVel).z;
  iVar3 = desiredAng->z * 0x80 + (ent->ang).z * -0x80;
  fVar4 = (float)(iVar3 >> 7);
  if ((int)(((uint)fVar4 ^ iVar3 >> 0x1f) - (iVar3 >> 0x1f)) <=
      (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
    (ent->angVel).z = iVar3 >> 8;
    return;
  }
  fVar2 = flight->rollScaled;
  if ((skill & 1) == 0) {
    if ((int)fVar4 <= (int)fVar2) {
      fVar2 = (float)-(int)fVar2;
      goto joined_r0x0040342d;
    }
  }
  else {
    fVar6 = (float)((int)fVar2 >> 2);
    if ((int)fVar6 < (int)fVar4) goto LAB_00403431;
    fVar2 = (float)(-(int)fVar2 >> 2);
joined_r0x0040342d:
    fVar6 = fVar4;
    if ((int)fVar2 <= (int)fVar4) goto LAB_00403431;
  }
  fVar6 = fVar2;
LAB_00403431:
  iVar3 = (int)((int)fVar6 * 0x80 + uVar1 * -0x80) >> 7;
  if (0x400 < iVar3) {
    (ent->angVel).z = uVar1 + 0x400;
    return;
  }
  if (iVar3 < -0x400) {
    iVar3 = -0x400;
  }
  (ent->angVel).z = uVar1 + iVar3;
  return;
}

