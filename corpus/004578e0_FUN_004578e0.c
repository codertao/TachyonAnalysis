
void FUN_004578e0(SpED *param_1,int param_2)

{
  param_1->netFlags = 1;
  FUN_0048b330(param_1);
  FUN_00457890(param_1);
  Quad_UnlinkDynamic(param_1);
  FUN_00462380(param_1);
  FUN_0045cf80(param_1,param_2 + 0x14);
  SrvSend_EntityStateOp(8,param_1->netId,0,0,param_1->quadrant,param_1[1].next);
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  return;
}

