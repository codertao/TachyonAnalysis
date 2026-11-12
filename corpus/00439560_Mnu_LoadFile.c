
/* sweep: begin+load all sections */

undefined4 Mnu_LoadFile(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  Viewport_SetFlight(0);
  Fade_SetLevel(0);
  Mnu_Begin(param_2);
  iVar1 = Cbin_Open_Inner(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  Mnu_LoadStrings(param_2);
  Mnu_LoadPcxImages(param_2);
  Mnu_LoadSounds(param_2);
  Mnu_LoadImages(param_2);
  Mnu_LoadFonts(param_2);
  Mnu_LoadCursors(param_2);
  Mnu_LoadWindows(param_2);
  Mnu_LoadButtons(param_2);
  Mnu_LoadTextEntries(param_2);
  Mnu_LoadTextAreas(param_2);
  Mnu_LoadImageAreas(param_2);
  if (DAT_005a4300 != 0) {
    OurFreeMem(DAT_005a4300);
  }
  Mem_AllocZeroTagged(&DAT_005a4300,0x10000,4,s_mnu_FontLine_Buffer_0053fe3c,0xa000);
  Cbin_Close();
  return 1;
}

