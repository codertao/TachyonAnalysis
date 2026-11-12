
/* sweep */

void PlayerDcb_InstallHandlers(int param_1)

{
  undefined4 uVar1;
  
  *(code **)(param_1 + 0x68) = PlayerDcb_Think;
  *(code **)(param_1 + 0x6c) = PlayerShip_CollisionPostThink;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
  *(code **)(param_1 + 0x5c) = Weapon_JitterTick;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
  DAT_005b3340 = 0;
  DAT_005b3344 = 0;
  FF_StopSpring();
  Ent_ClearWeaponTargets(param_1,&DAT_005b31c0);
  uVar1 = Systems_ToPowerUpgradeFlags(DAT_005b2154);
  Power_Init(&g_PlayerPower,DAT_005b1f0c + 0xd0,0,uVar1,DAT_005b9020);
  Decoy_InitCounter(&DAT_005b214c);
  Hud_ClearSpeedReadout();
  SpaceDust_SetEnabled(1);
  return;
}

