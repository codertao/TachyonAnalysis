
/* sweep */

void Player_DropDeadTarget(int param_1)

{
  if ((((g_FlightStateFlags & 4) == 0) && (*(int *)(param_1 + 0x90) != 0)) &&
     (*(short *)(*(int *)(param_1 + 0x90) + 0xce) != 0)) {
    Player_ClearTarget();
  }
  if ((((byte)DAT_005b3304 & 0x1f) == 0) && (*(int *)(param_1 + 0x90) == 0)) {
    Target_SelectNextOfType(2);
  }
  return;
}

