
undefined4 * FUN_0046f0c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00583580;
  uVar2 = 0;
  do {
    iVar1 = str_cmp(puVar3,param_1);
    if (iVar1 == 0) {
      return puVar3;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x1a;
  } while (uVar2 < 0x20);
  return (undefined4 *)0x0;
}

