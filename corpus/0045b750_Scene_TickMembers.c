
/* sweep */

void Scene_TickMembers(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  Scene_ResolveMembers(param_1);
  if (param_2[3] != 0) {
    param_2[3] = param_2[3] + -1;
    return;
  }
  if (param_2[2] != 0) {
    param_2[2] = param_2[2] + -1;
  }
  if (param_2[2] == 0) {
    iVar1 = param_2[1];
    iVar2 = *param_2;
    param_2[1] = iVar1 + 1U;
    *param_2 = iVar2 + 0x44;
    if (*(uint *)(param_1 + 0x28) <= iVar1 + 1U) {
      Scene_CheckEndMembers(param_1);
      return;
    }
    Scene_ApplyFxState(iVar2 + 0x54);
    Scene_ApplyKeyframe(*param_2,param_1);
    param_2[2] = *(int *)*param_2;
    param_2[3] = ((int *)*param_2)[1];
  }
  Scene_MoveMembers(param_1);
  return;
}

