
/* sweep: space.mnu */

void TitleMenu_LoadUi(void)

{
  int iVar1;
  
  if (g_UiManager == 0) {
    Rend_ResetScene();
    TitleMenu_InitCallbacks(&g_UiManager);
    iVar1 = Mnu_LoadFile(s_space_mnu_00544434,&g_UiManager);
    if (iVar1 == 0) {
      Profile_StartGame();
    }
    ShipDefs_Load();
    Starbase_LoadBase(&g_UiManager);
    TitleCam_SetTime(0x440000);
    Audio_SetMasterVolume(0xff);
    load_sbf_and_bin(&DAT_005b2b78,&DAT_005b2b88);
    Gfx_SetAmbient(GLBL_spacesav[0x37],0x80,0x80);
    Light_SetGammaParams(GLBL_spacesav[0x38],0x80,0x80);
    Gfx_HwControl1();
    iVar1 = Cd_Check(1);
    if (iVar1 == 0) {
      cb_MainExit();
      return;
    }
  }
  return;
}

