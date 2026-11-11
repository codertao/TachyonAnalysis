
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1940(undefined4 *param_1,int *param_2)

{
  DAT_00666ab0 = *param_1;
  DAT_00666ab4 = param_1[1];
  DAT_00666ab8 = param_1[2];
  _DAT_00666abc = *param_2;
  _DAT_00666ac0 = param_2[1];
  _DAT_00666ac4 = param_2[2];
  call_Math_SinCos3((float *)&DAT_00666ac8,-*param_2,-param_2[1],-param_2[2]);
  return;
}

