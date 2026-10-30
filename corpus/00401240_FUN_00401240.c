
undefined4 FUN_00401240(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((code *)(&PTR_FUN_0053219c)[*param_1] != (code *)0x0) {
    uVar1 = (*(code *)(&PTR_FUN_0053219c)[*param_1])(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

