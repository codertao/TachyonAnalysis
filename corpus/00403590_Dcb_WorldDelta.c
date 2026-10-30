
/* compute world-space position delta +0xa0 from forward speed rotated by orientation +0x4c
   (staggered gyro via +0xd4) -> 0x424030 */

void Dcb_WorldDelta(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x1f) == 0) {
    iVar1 = param_1 + 0xd4;
  }
  else {
    iVar1 = 0;
  }
  Entity_ThrustToWorld
            (param_1,*(undefined4 *)(param_1 + 0xe8),*(int *)(param_1 + 0x8c) + 0x84,iVar1);
  return;
}

