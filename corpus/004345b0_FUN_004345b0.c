
undefined4 * FUN_004345b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_005a5e08;
  if (param_1 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[0xf]) {
      iVar2 = FUN_004c67c0(*puVar1,param_1);
      if (iVar2 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

