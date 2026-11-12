
/* sweep: guess */

void Scene_ApplyFxState(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FF_StopJolt();
    }
    else if (iVar1 == 1) {
      FF_PlayJolt(param_1[1],param_1[2],param_1[3],param_1[4]);
    }
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FF_StopShake();
    }
    else if (iVar1 == 1) {
      FF_PlayShake(param_1[6],param_1[7]);
    }
  }
  iVar1 = param_1[10];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FF_StopConstant();
    }
    else if (iVar1 == 1) {
      FF_SetConstantForce(param_1[0xb],param_1[0xc]);
    }
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FF_StopSpring();
      return;
    }
    if (iVar1 == 1) {
      FF_SetSpring(param_1[9]);
    }
  }
  return;
}

