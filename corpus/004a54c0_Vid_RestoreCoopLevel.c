
/* sweep: guess */

void Vid_RestoreCoopLevel(void)

{
  HDC hdc;
  
  (**(code **)(*DAT_00602760 + 0x4c))(DAT_00602760);
  (**(code **)(*DAT_00602760 + 0x50))(DAT_00602760,GLBL_WindowHandle_,8);
  hdc = GetDC(GLBL_WindowHandle_);
  SetSystemPaletteUse(hdc,1);
  ReleaseDC(GLBL_WindowHandle_,hdc);
  return;
}

