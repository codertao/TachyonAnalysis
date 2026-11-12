
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* build WndStarBaseShipYard + 3D hangar scene (lights/camera) */

void Shipyard_Enter(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = Starbase_FindLight(s_HangarLight_00557b18);
  Gfx_SetBrightMode(1);
  Sw_EnableZBuffer(1);
  g_TitleMenu_ExitFlag = 0;
  DAT_005635dc = 0;
  _DAT_00563e00 = 0x3f800000;
  Ui_PresentFrame();
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipYard_00557b04,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipYard_00557b04);
  MenuHotkey_SetEscape(Starbase_GoHub);
  MenuHotkey_SetAccept(Shipyard_GoHub);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  puVar3 = &DAT_0056e3a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  Shipyard_LoadHangar();
  Shipyard_LoadShips();
  Shipyard_AimCameraAtBay(DAT_0056e3a4);
  Vec_DirAngles(&DAT_0056e3ac,DAT_0056e3a8 + 0x134,&DAT_0056e3c4);
  Starbase_PlayMusic(g_NextMode);
  iVar1 = Cd_Check(0);
  if (iVar1 == 0) {
    Starbase_GoHub();
    return;
  }
  return;
}

