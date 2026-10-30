
void FUN_00462d70(int *param_1)

{
  int iVar1;
  
  FUN_0048e380(param_1,8);
  FUN_0049bfc0(&PTR_DAT_005496e0);
  *param_1 = DAT_00563254;
  param_1[1] = DAT_00563258;
  iVar1 = *param_1;
  *param_1 = iVar1 << 0xd;
  if (iVar1 << 0xd == 0) {
    *param_1 = 0x1388000;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 * 0x32;
  if (iVar1 * 0x32 == 0) {
    param_1[1] = 0x96;
  }
  return;
}

