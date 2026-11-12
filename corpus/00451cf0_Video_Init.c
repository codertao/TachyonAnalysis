
/* sets g_PalBrightness = 0xb4 (software); Video_InitHardware resets to 0x80 */

void Video_Init(void)

{
  int *piVar1;
  void *buf;
  
  if (2 < DAT_005b2ad8) {
    DAT_005b2ad8 = 2;
  }
  g_PalBrightness = 0xb4;
  DAT_005a681c = 0;
  if (DAT_005b2acc == 0) {
    DAT_00564ae4 = 0;
    piVar1 = &DAT_00548730;
  }
  else {
    piVar1 = (int *)Video_InitHardware(DAT_005b2ad8 * 0x18 + 0x54873c);
    if (piVar1 == (int *)0x0) {
      piVar1 = &DAT_00548730;
    }
    if (DAT_00564ae4 != 0) {
      DAT_005a6800 = DAT_0058f418;
      DAT_005a67f4 = 1;
      goto LAB_00451d82;
    }
  }
  DAT_005a6800 = 0x10f;
  DAT_005a67f4 = 0;
LAB_00451d82:
  if ((piVar1[2] == 0x20) || (DAT_00564ae4 == 0)) {
    DAT_005a6824 = 4;
  }
  else {
    DAT_00602338 = Gfx_HwControl(8);
    DAT_0060233c = Gfx_HwControl(9);
    DAT_00602340 = Gfx_HwControl(10);
    call_Pix_InitFormat();
    DAT_005a6824 = 2;
  }
  Video_InitCursor(piVar1);
  Video_SetupViewport(*piVar1,piVar1[1]);
  if (DAT_00564ae4 == 0) {
    buf = _malloc(piVar1[1] * *piVar1 * 4);
    Sw_SetZBuffer(buf);
  }
  Video_InitRenderer();
  return;
}

