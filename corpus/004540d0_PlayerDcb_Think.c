
/* player-control DCB +0x68 think: if +0x10c==0 -> PlayerShip_UpdateKinematics; then 0x454040
   (camera/follow) */

void PlayerDcb_Think(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    PlayerShip_UpdateKinematics(param_1);
  }
  FUN_00454040(param_1);
  return;
}

