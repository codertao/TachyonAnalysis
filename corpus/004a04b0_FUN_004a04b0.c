
undefined4 * FUN_004a04b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00563ff4;
  if (param_1 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = FUN_004a0340(puVar1 + 2,param_1,0x10);
      if (iVar2 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

