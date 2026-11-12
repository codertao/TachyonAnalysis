
/* sweep: "yellow" */

undefined * ShipDes_ParseColor(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_00549e88;
  puVar1 = PTR_DAT_00549e88;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    iVar2 = __stricmp(*ppuVar3,param_1);
    if (iVar2 == 0) break;
    puVar1 = ppuVar3[2];
    ppuVar3 = ppuVar3 + 2;
  }
  return ppuVar3[1];
}

