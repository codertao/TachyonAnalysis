
undefined4 * FUN_00437ac0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0053fc50;
  iVar1 = DAT_0053fc50;
  while( true ) {
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    if (iVar1 == param_1) break;
    iVar1 = puVar2[3];
    puVar2 = puVar2 + 3;
  }
  return puVar2;
}

