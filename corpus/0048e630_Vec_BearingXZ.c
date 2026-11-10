
/* atan2 of (b - a) in the x/z plane, 16.16 angle (512/rev) */

void Vec_BearingXZ(int *param_1,int *param_2)

{
  Math_Atan2(*param_2 - *param_1 >> 1,param_2[2] - param_1[2] >> 1);
  return;
}

