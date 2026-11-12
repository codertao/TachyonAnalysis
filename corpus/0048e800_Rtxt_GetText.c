
/* sweep: null-safe */

undefined4 Rtxt_GetText(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)Rtxt_GetRecord(param_1,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}

