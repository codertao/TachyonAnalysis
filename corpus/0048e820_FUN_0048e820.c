
undefined4 FUN_0048e820(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)Rtxt_Lookup(param_1,param_2,param_3);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}

