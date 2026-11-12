
/* laser bar, burner bar, one shield bar = (front + rear) / (2 * max) */

void Hud_DrawEnergyBars(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa60);
  iVar3 = DAT_005b1f0c + 0xd0;
  uVar2 = Power_GetLaserMax(&g_PlayerPower,iVar3,g_PlayerPower.laserRate,uVar1);
  Hud_DrawEnergyLabel(param_1 + 0xa28,g_PlayerPower.laserEnergy,uVar2);
  if (((byte)DAT_005b2154 & 4) != 0) {
    uVar2 = Power_GetBurnerMax(&g_PlayerPower,iVar3,g_PlayerPower.burnerRate,uVar1);
    Hud_DrawEnergyLabel(param_1 + 0xa0c,g_PlayerPower.burnerEnergy,uVar2);
  }
  iVar3 = Shield_GetMax(&g_PlayerPower,iVar3,g_PlayerPower.shieldFrontRate,uVar1);
  Hud_DrawEnergyLabel(param_1 + 0xa44,g_PlayerPower.shieldRear + g_PlayerPower.shieldFront,
                      iVar3 << 1);
  return;
}

