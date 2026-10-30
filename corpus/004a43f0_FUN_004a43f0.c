
void FUN_004a43f0(void)

{
  HDC hdc;
  
  hdc = GetDC(DAT_0060395c);
  SetSystemPaletteUse(hdc,2);
  ReleaseDC(DAT_0060395c,hdc);
  return;
}

