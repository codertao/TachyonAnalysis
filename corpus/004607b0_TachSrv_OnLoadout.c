
/* 0x2028: connection +0x158 = systems bits (trusted), Power_SetUpgradeFlags, rebuild weapon/ammo
   list */

void TachSrv_OnLoadout(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  short *psVar4;
  
  *(undefined4 *)(DAT_0058b068 + 0x158) = *param_1;
  uVar1 = Systems_ToPowerUpgradeFlags(*param_1);
  Power_SetUpgradeFlags(DAT_0058b064 + 0x11c,uVar1);
  psVar4 = (short *)((int)param_1 + 6);
  clr_bytes(DAT_0058b068 + 0x164,0x60);
  uVar3 = 0;
  puVar2 = (undefined4 *)(DAT_0058b068 + 0x164);
  if (*(short *)(param_1 + 1) != 0) {
    do {
      if (*psVar4 != 0) {
        uVar1 = WeaponDef_Get(*psVar4 + -1);
        *puVar2 = uVar1;
        puVar2[1] = (int)psVar4[1];
        puVar2[2] = (int)psVar4[1];
      }
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 2;
      puVar2 = puVar2 + 3;
    } while (uVar3 < *(ushort *)(param_1 + 1));
  }
  return;
}

