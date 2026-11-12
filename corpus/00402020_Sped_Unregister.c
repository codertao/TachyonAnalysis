
/* sweep: detach entity from all systems + SrvSend_EntityStateOp(8) */

void Sped_Unregister(int param_1,int param_2)

{
  if (param_1 == g_Wingman) {
    Wingman_OnKilled(param_1);
  }
  Ent_ClearTargetedBy(param_1);
  Ent_RemoveFromTargets(param_1);
  Quad_UnlinkDynamicList(param_1,*(int *)(param_1 + 100) + 0x14);
  Quad_Unlink(param_1);
  Srv_NotifyEntityRemoved(param_1);
  *(undefined4 *)(param_2 + 0x28) = 0;
  Scene_IsMember(param_1);
  SrvSend_EntityStateOp(8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
  Ent_ClearWeaponTargets(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

