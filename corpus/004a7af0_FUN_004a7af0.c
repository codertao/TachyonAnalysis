
undefined4
FUN_004a7af0(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_00601e74 <= param_1) {
    return 0;
  }
  uVar1 = FUN_004a79d0(param_1 * 0x10 + DAT_00601e78,param_2,param_3,param_4,param_5);
  return uVar1;
}

