
/* compute world-space position delta +0xa0 from forward speed rotated by orientation +0x4c
   (staggered gyro via +0xd4) -> 0x424030 */

void Dcb_WorldDelta(SpED *param_1)

{
  undefined1 *puVar1;
  
  if (((*(uint *)&param_1[2].field_0x60 ^ DAT_005897e4) & 0x1f) == 0) {
    puVar1 = &param_1->field_0xd4;
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  Entity_ThrustToWorld
            (param_1,*(undefined4 *)&param_1->field_0xe8,*(int *)&param_1->field_0x8c + 0x84,puVar1)
  ;
  return;
}

