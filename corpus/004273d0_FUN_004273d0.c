
undefined * FUN_004273d0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &g_ShipSystemTable;
  puVar1 = g_ShipSystemTable;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    iVar2 = str_cmp(*ppuVar3,param_1);
    if (iVar2 == 0) break;
    puVar1 = ppuVar3[3];
    ppuVar3 = ppuVar3 + 3;
  }
  return ppuVar3[2];
}

