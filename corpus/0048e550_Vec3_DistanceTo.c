
/* exact |a-b| of two int vec3 (raw units) */

void Vec3_DistanceTo(int *param_1,int *param_2)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = *param_1 - *param_2;
  local_8 = param_1[1] - param_2[1];
  local_4 = param_1[2] - param_2[2];
  MathAsm_VecLengthF_Fwd(&local_c);
  return;
}

