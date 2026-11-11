
char * FUN_00427380(byte param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  char *pcVar3;
  
  ppuVar2 = &g_ShipSystemTable;
  puVar1 = g_ShipSystemTable;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return s_UNKNOWN_CARD_00536404;
    }
    if (ppuVar2[2] == (undefined *)(1 << (param_1 & 0x1f))) break;
    puVar1 = ppuVar2[3];
    ppuVar2 = ppuVar2 + 3;
  }
  pcVar3 = (char *)FUN_0048e850(DAT_005a6140,*ppuVar2);
  return pcVar3;
}

