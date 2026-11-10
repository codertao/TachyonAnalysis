
/* rule 1: 1 if target group slot id == rule target */

undefined4 TargetRule_GroupMatch(int param_1,undefined4 param_2,int param_3)

{
  if ((((param_3 != 0) && (*(char *)(param_3 + 0x1b) != '\x01')) && (*(int *)(param_3 + 0x24) != 0))
     && (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_3 + 0x24) + 4))) {
    return 1;
  }
  return 0;
}

