
void FUN_0041d8c0(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (DAT_005a6730 != 0) {
    ppuVar3 = &PTR_DAT_00534c90;
    puVar2 = PTR_DAT_00534c90;
    while (puVar2 != (undefined *)0x0) {
      if (*(int *)*ppuVar3 != 0) {
        (*(code *)ppuVar3[1])();
      }
      ppuVar1 = ppuVar3 + 2;
      ppuVar3 = ppuVar3 + 2;
      puVar2 = *ppuVar1;
    }
  }
  return;
}

