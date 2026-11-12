
/* sweep */

void Resupply_AddLaser(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b1f0c + 0xd0;
  g_PlayerPower.laserEnergy = g_PlayerPower.laserEnergy + param_1;
  iVar2 = Power_GetLaserMax(&g_PlayerPower,iVar1);
  if (iVar2 < g_PlayerPower.laserEnergy) {
    g_PlayerPower.laserEnergy = Power_GetLaserMax(&g_PlayerPower,iVar1);
  }
  return;
}

