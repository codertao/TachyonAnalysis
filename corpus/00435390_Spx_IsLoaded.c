
/* sweep */

undefined4 Spx_IsLoaded(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)Spx_FindLoaded(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}

