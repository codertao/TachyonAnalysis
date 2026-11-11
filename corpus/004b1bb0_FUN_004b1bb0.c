
void FUN_004b1bb0(float *param_1,vec3 *param_2)

{
  call_Math_SinCos3(param_1,param_2->x,param_2->y,param_2->z);
  call_Rot_SetSinCos(param_1);
  return;
}

