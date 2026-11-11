
/* compute world-space position delta +0xa0 from forward speed rotated by orientation +0x4c
   (staggered gyro via +0xd4) -> 0x424030 */

void Dcb_WorldDelta(SpED *param_1)

{
  SpED *pSVar1;
  
  if (((param_1[3].vel.y ^ DAT_005897e4) & 0x1f) == 0) {
    pSVar1 = param_1 + 1;
  }
  else {
    pSVar1 = (SpED *)0x0;
  }
  Entity_ThrustToWorld(param_1,*(undefined4 *)&param_1[1].linked,param_1->desc + 1,pSVar1);
  return;
}

