
void FUN_00457e60(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_0048e380(param_1,0xbc);
  FUN_0048e3d0(param_1 + 0x58,0xa00,4,s_FLIGHTGROUP_ARRAY_00548d6c,0xbbbb);
  *(int **)(param_1 + 0x3c) = param_2;
  uVar1 = FUN_0041f640();
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(int *)(param_1 + 0x30) = param_4;
  param_2[0x10] = param_4;
  param_2[0xf] = param_3;
  *param_2 = param_1;
  FUN_00450810(param_1);
  FUN_00457e30(param_1);
  return;
}

