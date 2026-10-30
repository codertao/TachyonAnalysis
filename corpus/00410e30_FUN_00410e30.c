
void FUN_00410e30(int param_1)

{
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  Entity_ApplyTurnControl
            (0,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xf8,*(int *)(param_1 + 0x8c) + 0x84,0,
             param_1 + 0x144,0,1);
  FUN_00410df0(param_1);
  return;
}

