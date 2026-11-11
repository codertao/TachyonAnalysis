
/* 0x2027: as 0x2003 but on capship part by part id (CapShip_DamagePartById) */

void TachSrv_OnPartHitReport(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d680(*(undefined4 *)(param_1 + 0xc),g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    Weapon_StageDamage(*(undefined1 *)(param_1 + 0x12),g_SrvCurShip,0,param_1,g_SrvCurConn,0,0,
                       (uint)*(ushort *)(param_1 + 0x14) << 2,0xffffffff,
                       *(undefined4 *)(iVar1 + 100));
    DAT_00565410 = 0;
    CapShip_DamagePartById(iVar1,*(undefined2 *)(param_1 + 0x10));
    Weapon_PlayImpact(*(undefined1 *)(param_1 + 0x12),0,*(undefined1 *)(param_1 + 0x13),0xb,1);
  }
  return;
}

