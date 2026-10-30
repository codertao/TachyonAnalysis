
/* per-frame in-flight sim tick (mode+4; runs the SPED world/physics) [confirmed via gdb
   EDI=0x533a70 @ 0x44eb2a] */

void Flight_Update(void)

{
  Flight_Update_Phase1();
  Flight_UpdateWorld();
  return;
}

