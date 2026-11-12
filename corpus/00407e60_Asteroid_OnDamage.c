
/* sweep: hp at +0xbc; destroyed -> SrvSend_EntityDestroyed type 5 */

void Asteroid_OnDamage(SpED *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if ((0 < *(int *)&param_1->field_0xbc) &&
     (iVar2 = *(int *)&param_1->field_0xbc - ((uint)(DAT_005653e8 * DAT_005653e0) >> 8),
     *(int *)&param_1->field_0xbc = iVar2, iVar2 < 1)) {
    lVar1 = (longlong)*(int *)(*(int *)&param_1->field_0x58 + 0x30) * 0x4000;
    Ent_ClearWeaponTargets(param_1,param_1->quadrant);
    SrvSend_EntityDestroyed
              (&param_1->pos,5,
               (int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 0xe,0,0,
               DAT_00565408,0,param_1->quadrant);
    SrvSend_Despawn(param_1);
    Ent_UnlinkFromMaps(param_1,&param_1->quadrant->staticSectorMap);
    Srv_BroadcastToQuadrant(param_1);
    Quad_UnlinkStatic(param_1);
  }
  return;
}

