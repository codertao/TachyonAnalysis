
/* action 6/4,5,8: named Sped action (extra) on group in both SPX tables */

void TrigAct_GroupSpedAction(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  Trig_GroupSpedAction
            (param_1,param_2,param_3,param_4,*(undefined4 *)(*(int *)(param_4 + 0x3c) + 4));
  Trig_GroupSpedAction
            (param_1,param_2,param_3,param_4,*(undefined4 *)(*(int *)(param_4 + 0x3c) + 8));
  return;
}

