
/* sweep */

void Wingman_Remove(int param_1)

{
  g_Wingman = 0;
  Ent_ClearTargetedBy(param_1);
  Ent_RemoveFromTargets(param_1);
  Quad_UnlinkDynamicList(param_1,*(int *)(param_1 + 100) + 0x14);
  Quad_Unlink(param_1);
  Srv_NotifyEntityRemoved(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x28) = 0;
  Scene_IsMember(param_1);
  return;
}

