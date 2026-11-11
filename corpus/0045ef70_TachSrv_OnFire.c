
/* 0x2001: ammo check only, relay 0x1002 to quadrant r4000 except shooter; no server projectile */

void TachSrv_OnFire(int param_1)

{
  byte *pbVar1;
  int local_c;
  int local_8;
  int local_4;
  
  pbVar1 = g_SrvCurConn->weaponSlots + (uint)*(byte *)(param_1 + 0x14) * 0xc;
  if (*(int *)pbVar1 != 0) {
    if (*(int *)(*(int *)pbVar1 + 0x50) != 0) {
      if (*(int *)(pbVar1 + 8) == 0) {
        return;
      }
      *(int *)(pbVar1 + 8) = *(int *)(pbVar1 + 8) + -1;
    }
    local_c = (uint)*(ushort *)(param_1 + 0xc) << 0x10;
    local_8 = (uint)*(ushort *)(param_1 + 0xe) << 0x10;
    local_4 = (uint)*(ushort *)(param_1 + 0x10) << 0x10;
    SrvSend_ProjectileFired
              (param_1,&local_c,*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17),0,3,
               g_SrvCurConn,g_SrvCurShip->quadrant,g_SrvCurShip->netId);
    *(int *)&g_SrvCurConn->ship->field_0xe8 = *(int *)&g_SrvCurConn->ship->field_0xe8 + 1;
  }
  return;
}

