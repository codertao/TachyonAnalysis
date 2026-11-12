
/* sweep */

void Snd3D_SetVolume(undefined4 param_1,undefined4 param_2,int param_3)

{
  float10 fVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  
  local_34 = param_2;
  fVar1 = (float10)Snd_GetMasterScale();
  local_3c = (undefined4)(longlong)ROUND(fVar1 * (float10)param_3);
  local_30 = local_3c;
  Snd3D_SetParams(param_1,&local_34,3);
  return;
}

