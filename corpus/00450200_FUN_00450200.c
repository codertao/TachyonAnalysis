
undefined4 FUN_00450200(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_00590238 + 0x44) != (code *)0x0) {
    uVar1 = (**(code **)(DAT_00590238 + 0x44))(param_1,param_2);
    return uVar1;
  }
  return 1;
}

