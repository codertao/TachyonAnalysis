
/* sweep */

void Hud_DrawLaserBar(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Power_GetLaserMax(&g_PlayerPower,DAT_005b1f0c + 0xd0);
  HudBar_DrawDefault(param_1 + 0x28,g_PlayerPower.laserEnergy,uVar1);
  return;
}

