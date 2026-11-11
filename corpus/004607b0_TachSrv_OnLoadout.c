
/* 0x2028: connection +0x158 = systems bits (trusted), Power_SetUpgradeFlags, rebuild weapon/ammo
   list */

void TachSrv_OnLoadout(uint *param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  short *psVar4;
  
  g_SrvCurConn->systems = *param_1;
  uVar1 = Systems_ToPowerUpgradeFlags(*param_1);
  Power_SetUpgradeFlags(&g_SrvCurShip->power,uVar1);
  psVar4 = (short *)((int)param_1 + 6);
  clr_bytes(g_SrvCurConn->weaponSlots,0x60);
  uVar3 = 0;
  pbVar2 = g_SrvCurConn->weaponSlots;
  if ((short)param_1[1] != 0) {
    do {
      if (*psVar4 != 0) {
        uVar1 = WeaponDef_Get(*psVar4 + -1);
        *(undefined4 *)pbVar2 = uVar1;
        *(int *)(pbVar2 + 4) = (int)psVar4[1];
        *(int *)(pbVar2 + 8) = (int)psVar4[1];
      }
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 2;
      pbVar2 = pbVar2 + 0xc;
    } while (uVar3 < (ushort)param_1[1]);
  }
  return;
}

