
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

undefined4 Fixed_ToFloat(uint param_1)

{
  undefined8 local_8;
  
  if (param_1 >> 3 != 0) {
    local_8 = (ulonglong)(param_1 >> 3);
    local_8._0_4_ = (undefined4)(longlong)ROUND((_DAT_0052eb88 / (float)local_8) * _DAT_0052e544);
    return (undefined4)local_8;
  }
  return 0;
}

