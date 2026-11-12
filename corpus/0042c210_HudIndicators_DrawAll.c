
/* sweep */

void HudIndicators_DrawAll(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_00536558;
  puVar2 = PTR_DAT_00536558;
  while (puVar2 != (undefined *)0x0) {
    HudIndicator_Draw(puVar2);
    ppuVar1 = ppuVar3 + 3;
    ppuVar3 = ppuVar3 + 3;
    puVar2 = *ppuVar1;
  }
  return;
}

