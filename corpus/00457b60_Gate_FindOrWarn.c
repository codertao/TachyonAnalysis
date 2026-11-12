
/* sweep: guess */

void Gate_FindOrWarn(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Gate_FindByNameB(param_1,param_2,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4));
  if (iVar1 == 0) {
    Gate_FindByNameB(param_1,param_2,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 8));
  }
  return;
}

