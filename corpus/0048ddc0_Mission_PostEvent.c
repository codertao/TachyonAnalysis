
/* (event{cat,sub,code,value,a,b}, quadrant) -> both trigger tables */

void Mission_PostEvent(undefined4 param_1,int param_2)

{
  Mission_MatchTriggers(param_1,param_2,*(undefined4 *)(*(int *)(param_2 + 0x3c) + 4));
  Mission_MatchTriggers(param_1,param_2,*(undefined4 *)(*(int *)(param_2 + 0x3c) + 8));
  return;
}

