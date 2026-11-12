
/* sweep */

void BW_AddTeamStat(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = BW_FindBase(param_1);
  if (iVar1 != 0) {
    switch(param_2) {
    case 0:
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_3;
      return;
    case 1:
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + param_3;
      return;
    case 2:
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + param_3;
      return;
    case 3:
      *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + param_3;
    }
  }
  return;
}

