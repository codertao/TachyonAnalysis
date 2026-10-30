
void FUN_004104a0(int *param_1,int *param_2)

{
  *param_2 = *param_1 - DAT_005b9600;
  param_2[1] = param_1[1] - DAT_005b9604;
  param_2[2] = param_1[2] - DAT_005b9608;
  FUN_0052dbcd(&DAT_005b9628);
  FUN_004b2410(param_2,param_2);
  return;
}

