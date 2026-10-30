
undefined4 * FUN_004a28c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_005640c4;
  if (param_1 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = FUN_004a0340(puVar1 + 5,param_1,0x10);
      if (iVar2 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

