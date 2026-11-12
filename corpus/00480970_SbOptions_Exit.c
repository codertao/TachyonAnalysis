
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SbOptions_Exit(void)

{
  Sw_EnableZBuffer(0);
  _DAT_005b2b24 = (float)GLBL_spacesav[0x3f] * _DAT_0052e644;
  DAT_005b2b34 = GLBL_spacesav[0x58];
  g_NextMode = g_StarbaseScreen;
  ScreenZoom_FreeAll();
  OptMenu_FreeAll();
  Options_StopVoiceTest();
  DAT_00563d74 = 0;
  return;
}

