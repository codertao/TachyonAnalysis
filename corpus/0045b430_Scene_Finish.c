
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* end cutscene, apply END_MISSION* flags */

void Scene_Finish(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_0058f1c4 & 2) == 0) {
    FUN_0045b340(param_1);
  }
  if (DAT_0058f1d0 != 0) {
    FUN_00466f30(0);
  }
  DAT_0058f1c0 = 0;
  _DAT_0058f1c8 = 0;
  DAT_0058f1d0 = 0;
  FUN_00430210(&PTR_DAT_0053e890);
  if (DAT_0058f210 != 0) {
    FUN_0044ed20();
  }
  uVar1 = *(uint *)(param_1 + 0x134);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 1) != 0) {
        g_MissionEndFlag = 1;
      }
    }
    else {
      g_MissionEndFlag = 1;
      g_ReturnMode = &g_Mode_TitleMenu;
      g_NextMode = &g_Mode_TitleMenu;
    }
  }
  else {
    g_MissionEndFlag = 1;
    g_ReturnMode = &g_Mode_Credits;
    g_NextMode = &g_Mode_Credits;
  }
  FUN_004a0bb0();
  FUN_0042fee0();
  iVar2 = FUN_0045b3f0(param_1);
  if (iVar2 != 0) {
    set_some_glbl_scalar(GLBL_spacesav[0x53]);
    load_sbf_and_bin(s_ttfmusic_005342d8,s_ttf_music_005342e4);
  }
  return;
}

