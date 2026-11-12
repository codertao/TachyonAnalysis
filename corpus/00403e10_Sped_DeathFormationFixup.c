
/* sweep */

void Sped_DeathFormationFixup(int param_1,int param_2)

{
  undefined4 uVar1;
  
  Sped_PostDeathEvents(param_1,param_2);
  if (*(int *)(param_2 + 0x54) != -1) {
    if (*(int *)(param_1 + 0xf8) == 0) {
      Formation_PromoteLeader(*(undefined4 *)(param_1 + 0xfc),param_1);
      uVar1 = Quad_GetGroupOrder(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x54));
      Formation_Unlink(param_1,uVar1);
      Quad_GetGroupLeader(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x54),
                          *(undefined4 *)(param_1 + 0xfc));
    }
    else {
      uVar1 = Quad_GetGroupOrder(*(undefined4 *)(param_1 + 100),*(int *)(param_2 + 0x54));
      Formation_Unlink(param_1,uVar1);
    }
  }
  Sped_MsgDestroyed(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8)
                    ,param_1 + 0xdc,*(undefined4 *)(param_1 + 100));
  return;
}

