
/* sweep */

void Vid_SetSysPalNoStatic(void)

{
  HDC hdc;
  
  hdc = GetDC(GLBL_WindowHandle_);
  SetSystemPaletteUse(hdc,2);
  ReleaseDC(GLBL_WindowHandle_,hdc);
  return;
}

