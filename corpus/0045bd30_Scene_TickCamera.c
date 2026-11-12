
/* sweep */

void Scene_TickCamera(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
  if (param_2[0xb] == 0) {
    if (param_2[3] != 0) {
      param_2[3] = param_2[3] + -1;
      return;
    }
    if (param_2[2] != 0) {
      param_2[2] = param_2[2] + -1;
    }
    if (param_2[2] == 0) {
      iVar3 = param_2[1];
      param_2[1] = iVar3 + 1U;
      iVar1 = iVar2 + 0x60;
      *param_2 = iVar1;
      if (*(uint *)(param_1 + 0x20) <= iVar3 + 1U) {
        param_2[0xb] = 1;
        if ((*(byte *)(iVar2 + 0x20) & 2) == 0) {
          return;
        }
        Scene_CheckEndCamera(param_1);
        return;
      }
      SceneCam_ApplyKey(iVar1,param_1);
      param_2[2] = *(int *)*param_2;
      param_2[3] = ((int *)*param_2)[1];
    }
    SceneCam_Interpolate(param_1,param_2);
  }
  return;
}

