
/* 0x2003: trust client; recompute dmg from weapon def * scale, call target +0x80, impact broadcast
    */

void TachSrv_OnHitReport(int param_1)

{
  int iVar1;
  
  iVar1 = Quad_FindEntById(*(undefined4 *)(param_1 + 0xc),g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x80) != 0) {
      Weapon_StageDamage(*(undefined1 *)(param_1 + 0x10),g_SrvCurShip,0,param_1,g_SrvCurConn,0,0,
                         (uint)*(ushort *)(param_1 + 0x12) << 2,0xffffffff,
                         *(undefined4 *)(iVar1 + 100));
      DAT_00565410 = 0;
      (**(code **)(iVar1 + 0x80))(iVar1);
    }
    Weapon_PlayImpact(*(undefined1 *)(param_1 + 0x10),0,*(undefined1 *)(param_1 + 0x11),0,0);
  }
  return;
}

