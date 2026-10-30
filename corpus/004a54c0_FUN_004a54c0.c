
void FUN_004a54c0(void)

{
  HDC hdc;
  
  (**(code **)(*DAT_00602760 + 0x4c))(DAT_00602760);
  (**(code **)(*DAT_00602760 + 0x50))(DAT_00602760,DAT_0060395c,8);
  hdc = GetDC(DAT_0060395c);
  SetSystemPaletteUse(hdc,1);
  ReleaseDC(DAT_0060395c,hdc);
  return;
}

