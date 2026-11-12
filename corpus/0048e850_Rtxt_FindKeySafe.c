
/* sweep */

undefined4 Rtxt_FindKeySafe(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)Rtxt_FindKey(param_1,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}

