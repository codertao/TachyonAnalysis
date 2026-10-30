
void FUN_004186c0(int *param_1,int *param_2,int *param_3)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = *param_1 - *param_2;
  local_8 = param_1[1] - param_2[1];
  local_4 = param_1[2] - param_2[2];
  FUN_004e04ba(&local_c);
  param_3[1] = param_3[1] + local_8 * 2;
  *param_3 = *param_3 + local_c * 2;
  param_3[2] = param_3[2] + local_4 * 2;
  return;
}

