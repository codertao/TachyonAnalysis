
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a5520(void)

{
  BYTE *pBVar1;
  HDC hdc;
  HPALETTE pHVar2;
  int iVar3;
  PALETTEENTRY *pPVar4;
  LOGPALETTE local_404 [128];
  
  local_404[0].palVersion = 0x300;
  local_404[0].palNumEntries = 0x100;
  pPVar4 = local_404[0].palPalEntry;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    pPVar4->peRed = '\0';
    pPVar4->peGreen = '\0';
    pPVar4->peBlue = '\0';
    pPVar4->peFlags = '\0';
    pPVar4 = pPVar4 + 1;
  }
  pBVar1 = &local_404[0].palPalEntry[0].peGreen;
  iVar3 = 0x100;
  do {
    ((PALETTEENTRY *)(pBVar1 + -1))->peRed = '\0';
    *pBVar1 = '\0';
    pBVar1[1] = '\0';
    pBVar1[2] = '\x04';
    pBVar1 = pBVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreatePalette(local_404);
  pHVar2 = SelectPalette(hdc,pHVar2,0);
  _DAT_006027ec = pHVar2;
  RealizePalette(hdc);
  pHVar2 = SelectPalette(hdc,pHVar2,0);
  DeleteObject(pHVar2);
  ReleaseDC((HWND)0x0,hdc);
  return;
}

