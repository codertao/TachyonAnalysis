
void FUN_0041a830(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  vec3 local_24;
  float local_18 [6];
  
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = *param_5;
  call_Math_SinCos3(local_18,*param_2,param_2[1],param_2[2]);
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_24,&local_24);
  *param_1 = *param_1 + local_24.x;
  param_1[1] = param_1[1] + local_24.y;
  param_1[2] = param_1[2] + local_24.z;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_2[1] + *param_4;
  return;
}

