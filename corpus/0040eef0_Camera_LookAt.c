
/* sweep */

void Camera_LookAt(int *param_1,int *param_2,int *param_3)

{
  int a0;
  int a1;
  int iVar1;
  vec3 local_30;
  vec3 local_24;
  float local_18 [6];
  
  local_30.z = 0x10000;
  local_24.y = 0x10000;
  local_30.x = 0;
  local_30.y = 0;
  local_24.x = 0;
  local_24.z = 0;
  call_Math_SinCos3(local_18,*param_3,param_3[1],param_3[2]);
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_30,&local_30);
  some_rotate_by_global(&local_24,&local_24);
  call_Math_SinCos3(local_18,-*param_2,-param_2[1],-param_2[2]);
  call_Rot_SetSinCos(local_18);
  Rot_ApplyCurrent(&local_30,&local_30);
  Rot_ApplyCurrent(&local_24,&local_24);
  a0 = Math_Atan2(local_30.x,-local_30.z);
  call_Math_SinCos3(local_18,a0,0,0);
  call_Rot_SetSinCos(local_18);
  call_Rot_AboutY(&local_30,&local_30);
  call_Rot_AboutY(&local_24,&local_24);
  a1 = Math_Atan2(local_30.y,-local_30.z);
  call_Math_SinCos3(local_18,0,a1,0);
  call_Rot_SetSinCos(local_18);
  call_Rot_AboutX(&local_24,&local_24);
  iVar1 = Math_Atan2(local_24.x,-local_24.y);
  param_1[1] = a1 * -0x80 >> 7;
  *param_1 = a0 * -0x80 >> 7;
  param_1[2] = (iVar1 << 7) >> 7;
  return;
}

