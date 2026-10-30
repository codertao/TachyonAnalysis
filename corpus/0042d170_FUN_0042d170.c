
void FUN_0042d170(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_18 [24];
  
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 1,1,1);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 2,1,2);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 3,1,3);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 4,1,4);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 5,1,5);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 6,1,6);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,local_18,0x18,0,4,7);
  uVar1 = FUN_0042cd20(param_3,local_18);
  *param_2 = uVar1;
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 8,1,8);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 9,1,9);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,0,0,param_2 + 10,1,10);
  Cbin_GetParam(s_ENERGY_BARS_00536888,param_1,local_18,0x18,0,4,0xb);
  uVar1 = FUN_0042c960(local_18,&PTR_s_LEFT_TO_RIGHT_00536520);
  param_2[0xb] = uVar1;
  return;
}

