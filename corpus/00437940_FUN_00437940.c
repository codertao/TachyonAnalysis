
void FUN_00437940(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_005b1f0c + 0xd0;
  iVar1 = Power_GetLaserMax(&g_PlayerPower,iVar2);
  iVar3 = iVar1 - g_PlayerPower.laserEnergy;
  if ((param_2 == 0) && (iVar1 >> 10 < iVar3)) {
    iVar3 = iVar1 >> 10;
  }
  g_PlayerPower.laserEnergy = g_PlayerPower.laserEnergy + iVar3;
  iVar2 = Power_GetBurnerMax(&g_PlayerPower,iVar2);
  if ((param_2 == 0) && (iVar2 >> 10 < iVar2 - g_PlayerPower.burnerEnergy)) {
    g_PlayerPower.burnerEnergy = g_PlayerPower.burnerEnergy + (iVar2 >> 10);
    return;
  }
  g_PlayerPower.burnerEnergy = g_PlayerPower.burnerEnergy + (iVar2 - g_PlayerPower.burnerEnergy);
  return;
}

