
void FUN_004a43f0(void)

{
  HDC hdc;
  
  hdc = GetDC(GLBL_WindowHandle_);
  SetSystemPaletteUse(hdc,2);
  ReleaseDC(GLBL_WindowHandle_,hdc);
  return;
}

