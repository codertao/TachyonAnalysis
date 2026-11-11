
void FUN_00427440(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &g_ShipSystemTable;
  puVar2 = g_ShipSystemTable;
  while (puVar2 != (undefined *)0x0) {
    iVar3 = str_cmp(*ppuVar4,param_1);
    if (iVar3 == 0) {
      *(undefined4 *)ppuVar4[1] = param_2;
    }
    ppuVar1 = ppuVar4 + 3;
    ppuVar4 = ppuVar4 + 3;
    puVar2 = *ppuVar1;
  }
  return;
}

