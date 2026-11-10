
/* client: every 16 frames regen laser and burner only (flags 0xc/0xd). Shields are NOT regenerated
   client-side */

void PlayerPower_RegenTick(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xc;
  if (DAT_005aeebc != 0) {
    uVar1 = 0xd;
  }
  if (((byte)DAT_005b3304 & 0xf) == 0) {
    Power_UpdateSpeedFactor(&g_PlayerPower,DAT_005b1f0c + 0xd0);
    Power_Regen(&g_PlayerPower,DAT_005b1f0c + 0xd0,uVar1,DAT_005b9020);
  }
  return;
}

