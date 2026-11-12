
/* sweep */

void Mine_Destroy(int param_1)

{
  int iVar1;
  
  Sped_SendDeathExplosion(param_1 + 0x34,0,*(undefined4 *)(param_1 + 100));
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0x18c) != 0) {
    Mine_FireDeathMissile(param_1);
  }
  if ((DAT_005653f4 != 0) && (*(short *)(DAT_005653f4 + 0x76) == 1)) {
    iVar1 = Ent_IsHostileToPlayer(param_1);
    if (iVar1 == 0) {
      *(int *)(DAT_005653f4 + 0xe4) = *(int *)(DAT_005653f4 + 0xe4) + 1;
    }
    else {
      *(int *)(DAT_005653f4 + 0xe0) = *(int *)(DAT_005653f4 + 0xe0) + 1;
    }
  }
  Sped_PostDeathEvents(param_1,*(undefined4 *)(param_1 + 0xd8));
  Ent_ClearWeaponTargets(param_1,*(undefined4 *)(param_1 + 100));
  Ent_ClearTargetedBy(param_1);
  Ent_RemoveFromTargets(param_1);
  SrvSend_Despawn(param_1);
  Ent_UnlinkFromMaps(param_1,*(int *)(param_1 + 100) + 0x14);
  Srv_BroadcastToQuadrant(param_1);
  Quad_Unlink(param_1);
  return;
}

