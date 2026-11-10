
void FUN_00404f60(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0xd8) + 0x24) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x30c) = 100;
    *(code **)(param_1 + 0x304) = FUN_00404f40;
    SrvSend_EntityStateOp(4,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
    Ent_SetEngageLimits(param_1,2,2);
    return;
  }
  Ai_ReacquireTarget(param_1);
  *(code **)(param_1 + 0x6c) = Ai_CollisionLookahead;
  return;
}

