
/* sweep */

void Turret_Destroy(int param_1)

{
  Ent_ClearTargetedBy(param_1);
  Ent_RemoveFromTargets(param_1);
  PartChain_Unlink(param_1);
  SrvSend_EntityDestroyed(param_1 + 0x34,3,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
  Quad_Unlink(param_1);
  SrvSend_Despawn(param_1);
  Quad_UnlinkDynamicList(param_1,*(int *)(param_1 + 100) + 0x14);
  return;
}

