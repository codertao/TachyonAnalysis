
void FUN_004560a0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  param_1[0xb] = param_4;
  uVar1 = FUN_00455e20(param_1,param_2);
  *param_1 = uVar1;
  uVar1 = Shield_GetMax(param_1,param_2);
  param_1[2] = uVar1;
  uVar1 = Shield_GetMax(param_1,param_2);
  param_1[4] = uVar1;
  uVar1 = FUN_00455e60(param_1,param_2,param_5);
  param_1[9] = uVar1;
  param_1[10] = *(undefined4 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar1 = FUN_00455e00(param_1,param_2);
    param_1[6] = uVar1;
  }
  if (param_3 != 0) {
    FUN_00455f40(param_1,0x10000,0,param_2);
    FUN_00455f40(param_1,0x10000,1,param_2);
    FUN_00455f40(param_1,0x10000,2,param_2);
  }
  return;
}

