
/* apply current maneuver row {yaw,pitch,roll offset, hold frames} */

void Ai_ManeuverStep(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x32c);
  Ai_SetDesiredRelative(param_1,*puVar1,puVar1[1],puVar1[2]);
  *(undefined4 *)(param_1 + 0x30c) = puVar1[3];
  return;
}

