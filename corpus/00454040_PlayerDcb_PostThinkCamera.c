
/* camera/follow; ticks collision cooldown 0x5b2118 */

void PlayerDcb_PostThinkCamera(int param_1)

{
  int iVar1;
  
  PlayerPower_RegenTick();
  PlayerEngine_UpdateSound(param_1);
  PlayerEngine_SlewLevel(param_1);
  Player_TickCountdown(param_1);
  Player_DropDeadTarget(param_1);
  Burner_UpdateFx(param_1);
  Shake_Update();
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  Player_UpdateLookAt(iVar1);
  Player_UpdateTargetRange(param_1);
  SmartShields_Tick(param_1);
  if (DAT_005b8f58 != 0) {
    Power_SapperDrain(&g_PlayerPower,DAT_005b8f58,0xc);
  }
  if (DAT_005b2118 != 0) {
    DAT_005b2118 = DAT_005b2118 + -1;
  }
  return;
}

