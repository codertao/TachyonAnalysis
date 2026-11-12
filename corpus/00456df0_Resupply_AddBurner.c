
/* sweep */

void Resupply_AddBurner(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b1f0c + 0xd0;
  g_PlayerPower.burnerEnergy = g_PlayerPower.burnerEnergy + param_1;
  iVar2 = Power_GetBurnerMax(&g_PlayerPower,iVar1);
  if (iVar2 < g_PlayerPower.burnerEnergy) {
    g_PlayerPower.burnerEnergy = Power_GetBurnerMax(&g_PlayerPower,iVar1);
  }
  return;
}

