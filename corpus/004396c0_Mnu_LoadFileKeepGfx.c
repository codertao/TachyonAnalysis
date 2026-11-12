
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: map screen */

undefined4 Mnu_LoadFileKeepGfx(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  _DAT_005a4b3c = 0;
  _DAT_005a4314 = 0;
  Mnu_ShutdownKeepGfx(param_2);
  Mem_AllocZeroTagged(param_2,0,4,s_Menu_Sentinel_0053fd54,0xa000);
  Menu_BuildFadeTable();
  ScreenZoom_Reset();
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
  Input_FlushKeyQueue();
  Cbin_Close();
  return 1;
}

