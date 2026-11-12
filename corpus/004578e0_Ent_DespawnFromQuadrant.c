
/* sweep */

void Ent_DespawnFromQuadrant(SpED *param_1,int param_2)

{
  param_1->netFlags = 1;
  Ent_ClearTargetedBy(param_1);
  Ent_ClearTargetRefs(param_1);
  Quad_UnlinkDynamic(param_1);
  Srv_NotifyEntityRemoved(param_1);
  Quad_UnlinkDynamicList(param_1,param_2 + 0x14);
  SrvSend_EntityStateOp(8,param_1->netId,0,0,param_1->quadrant,param_1[1].next);
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  return;
}

