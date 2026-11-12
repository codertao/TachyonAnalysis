
/* sweep */

void Camera_WorldToView(int *param_1,int *param_2)

{
  *param_2 = *param_1 - DAT_005b9600;
  param_2[1] = param_1[1] - DAT_005b9604;
  param_2[2] = param_1[2] - DAT_005b9608;
  call_Rot_SetSinCos((float *)&DAT_005b9628);
  Rot_ApplyCurrent(param_2,param_2);
  return;
}

