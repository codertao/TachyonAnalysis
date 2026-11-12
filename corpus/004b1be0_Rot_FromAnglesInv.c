
/* sweep */

void Rot_FromAnglesInv(float *param_1,int *param_2)

{
  call_Math_SinCos3(param_1,-*param_2,-param_2[1],-param_2[2]);
  call_Rot_SetSinCos(param_1);
  return;
}

