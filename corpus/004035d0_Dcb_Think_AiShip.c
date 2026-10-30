
/* AI/drone ship think (DCB +0x68, installed by 0x4036f0): Entity_ApproachVelocity + staggered turn
   FX + Dcb_WorldDelta + Euler integrate */

void Dcb_Think_AiShip(int param_1)

{
  Entity_TurnToward(param_1,param_1 + 0xdc,*(int *)(param_1 + 0x8c) + 0x84,
                    *(undefined4 *)(param_1 + 0x338));
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0;
  *(undefined1 *)(param_1 + 0x327) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    Entity_ApplyTurnControl
              (0,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xe8,*(int *)(param_1 + 0x8c) + 0x84,0,
               param_1 + 0x10c,0,1);
    *(char *)(param_1 + 0xc1) = (char)((int)(uint)*(ushort *)(param_1 + 0x312) >> 3);
  }
  Dcb_WorldDelta(param_1);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0xac);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
  Dcb_SetRangeFlags(param_1 + 0x10c,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  return;
}

