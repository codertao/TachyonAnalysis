
/* sweep */

void Vec3i_ToFloat(int *param_1,float *param_2)

{
  *param_2 = (float)*param_1 * f_global_scalar_maybe;
  param_2[1] = (float)param_1[1] * f_global_scalar_maybe;
  param_2[2] = (float)param_1[2] * f_global_scalar_maybe;
  return;
}

