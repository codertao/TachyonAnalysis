
/* per-frame player ship update: save prev pos(+0xe0)/vel(+0xec), PlayerControl_ProcessInput,
   afterburner/throttle logic (g_Throttle, energy ship+0x118), Entity_ApplyTurnControl (rotation),
   Entity_RotateVelToWorld (throttle+facing -> world motion) */

void PlayerShip_UpdateKinematics(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  PlayerControl_ProcessInput(param_1);
  if (DAT_005b1edc != 0) {
    DAT_005b1ee0 = 0;
  }
  if ((((DAT_005aeebc == 0) || (*(int *)(DAT_005b1f0c + 0x100) == 0)) ||
      (DAT_005b20f8 < *(int *)(DAT_005b1f0c + 0x118))) ||
     ((DAT_005b1edc != 0 || ((DAT_005b2154 & 4) == 0)))) {
    DAT_005b1ee8 = 0;
    iVar1 = DAT_005b1ee0;
    if ((DAT_005b8f58 & 1) != 0) {
      iVar1 = DAT_005b1ee0 >> 1;
    }
  }
  else {
    DAT_005b1ee8 = 1;
    DAT_005b1ee0 = 0x400;
    iVar1 = (-(uint)((DAT_005b8f58 & 1) != 0) & 0x401) - 1;
  }
  Entity_ApplyTurnControl
            (DAT_005b1eec,DAT_005b1ecc,&DAT_005b1ed0,DAT_005b1f0c + 0x84,iVar1,&DAT_005b20e0,
             DAT_005b2154 & 0x400,DAT_005b9020);
  if (DAT_005b1edc == 0) {
    Entity_ThrustToWorld(param_1,DAT_005b1ed0,DAT_005b1f0c + 0x84,&DAT_005b1ecc);
  }
  else if ((DAT_005b8f58 & 1) != 0) {
    FUN_00423fb0(param_1,DAT_005b1f0c + 0x84,&DAT_005b1ecc);
  }
  if ((DAT_005b2154 & 0x200) != 0) {
    FUN_00424a60(param_1);
  }
  FUN_004248e0(param_1);
  return;
}

