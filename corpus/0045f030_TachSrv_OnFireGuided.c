
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x2004: ammo check, stage, Proj_SpawnFromClientMissile (target = id, or player's target if lock
   flag) */

void TachSrv_OnFireGuided(undefined4 *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  SpED *pSVar3;
  
  pbVar2 = g_SrvCurConn->weaponSlots + (uint)*(byte *)((int)param_1 + 0x23) * 0xc;
  if (*(int *)pbVar2 != 0) {
    if (*(int *)(*(int *)pbVar2 + 0x50) != 0) {
      if (*(int *)(pbVar2 + 8) == 0) {
        return;
      }
      *(int *)(pbVar2 + 8) = *(int *)(pbVar2 + 8) + -1;
    }
    _DAT_00565424 = *param_1;
    _DAT_00565428 = param_1[1];
    _DAT_0056542c = param_1[2];
    _DAT_0056543c = (uint)*(ushort *)(param_1 + 3) << 0x10;
    _DAT_00565440 = (uint)*(ushort *)((int)param_1 + 0xe) << 0x10;
    DAT_00565458 = 0x10000;
    _DAT_00565444 = (uint)*(ushort *)(param_1 + 4) << 0x10;
    f16_DecodeVec((int)param_1 + 0x12,&DAT_00565430);
    DAT_0056544c = (uint)*(byte *)(param_1 + 8);
    DAT_00565448 = g_SrvCurConn->clientFrame - param_1[6];
    DAT_00565420 = g_SrvCurConn->ship;
    if (param_1[7] == 0) {
      pSVar3 = g_SrvCurShip->target;
    }
    else {
      pSVar3 = (SpED *)Quad_FindEntById(param_1[7],g_SrvCurConn->ship->quadrant);
    }
    DAT_00565450 = -(uint)(*(char *)((int)param_1 + 0x22) != '\0') & (uint)pSVar3;
    Proj_SpawnFromClientMissile();
    puVar1 = &g_SrvCurConn->ship->field_0xf0;
    *(int *)puVar1 = *(int *)puVar1 + 1;
  }
  return;
}

