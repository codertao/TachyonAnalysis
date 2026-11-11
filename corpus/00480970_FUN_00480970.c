
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480970(void)

{
  Sw_EnableZBuffer(0);
  _DAT_005b2b24 = (float)GLBL_spacesav[0x3f] * _DAT_0052e644;
  DAT_005b2b34 = GLBL_spacesav[0x58];
  g_NextMode = g_StarbaseScreen;
  FUN_00440c80();
  FUN_00480920();
  FUN_00481530();
  DAT_00563d74 = 0;
  return;
}

