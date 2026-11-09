
undefined4 __cdecl FUN_10001a20(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_100019e0(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xb;
  }
  for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}

