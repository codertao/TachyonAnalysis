
/* sweep */

void Hud_DrawBurnerBar(int param_1)

{
  undefined4 uVar1;
  
  if (((byte)DAT_005b2154 & 4) != 0) {
    uVar1 = Power_GetBurnerMax(&g_PlayerPower,DAT_005b1f0c + 0xd0);
    HudBar_DrawDefault(param_1 + 0x7c,g_PlayerPower.burnerEnergy,uVar1);
  }
  return;
}

