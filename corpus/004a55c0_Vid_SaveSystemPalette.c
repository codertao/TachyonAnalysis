
/* sweep */

void Vid_SaveSystemPalette(HWND param_1)

{
  undefined1 uVar1;
  HDC hdc;
  LOGPALETTE *plpal;
  int iVar2;
  WORD *pWVar3;
  tagPALETTEENTRY local_400 [256];
  
  hdc = GetDC(param_1);
  GetSystemPaletteEntries(hdc,0,0x100,local_400);
  SetSystemPaletteUse(hdc,2);
  plpal = (LOGPALETTE *)Mem_AllocTemp(0x800,s_Temp_pal_0055e388);
  if (plpal == (LOGPALETTE *)0x0) {
    ReleaseDC(param_1,hdc);
    return;
  }
  plpal->palVersion = 0x300;
  plpal->palNumEntries = 0x100;
  plpal->palPalEntry[0].peRed = '\0';
  plpal->palPalEntry[0].peGreen = '\0';
  plpal->palPalEntry[0].peBlue = '\0';
  plpal->palPalEntry[0].peFlags = '\0';
  *(undefined1 *)&plpal[0x80].palVersion = 0xff;
  *(undefined1 *)((int)&plpal[0x80].palVersion + 1) = 0xff;
  *(undefined1 *)&plpal[0x80].palNumEntries = 0xff;
  *(undefined1 *)((int)&plpal[0x80].palNumEntries + 1) = 0;
  iVar2 = 1;
  pWVar3 = &plpal[1].palNumEntries;
  do {
    uVar1 = (undefined1)iVar2;
    *(undefined1 *)&((LOGPALETTE *)(pWVar3 + -1))->palVersion = uVar1;
    *(undefined1 *)((int)pWVar3 + -1) = uVar1;
    *(undefined1 *)pWVar3 = uVar1;
    *(undefined1 *)((int)pWVar3 + 1) = 1;
    iVar2 = iVar2 + 1;
    pWVar3 = pWVar3 + 2;
  } while (iVar2 < 0xff);
  DAT_006022c8 = CreatePalette(plpal);
  SelectPalette(hdc,DAT_006022c8,0);
  RealizePalette(hdc);
  ReleaseDC(param_1,hdc);
  Mem_FreeTemp(plpal);
  return;
}

