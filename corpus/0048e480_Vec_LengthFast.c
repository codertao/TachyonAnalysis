
/* sweep: guess */

undefined4 Vec_LengthFast(int *param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = (undefined4)
            (longlong)
            ROUND(SQRT(((float10)*param_1 - (float10)*param_2) *
                       ((float10)*param_1 - (float10)*param_2) +
                       ((float10)param_1[1] - (float10)param_2[1]) *
                       ((float10)param_1[1] - (float10)param_2[1])));
  return local_8;
}

