
/* sweep: mode handler */

void Credits_Enter(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (g_PlayerVarStore != 0) {
    OurFreeMem(g_PlayerVarStore);
    g_PlayerVarStore = 0;
  }
  TitleMenu_LoadUi();
  iVar1 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  MenuHotkey_SetEscape(Credits_ReturnToTitle);
  MenuHotkey_SetAccept(Credits_ReturnToTitle);
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  TitleHover_Clear();
  Ui_HideCursor();
  Ui_ShowWindow(&g_UiManager,s_WndCredits_0053ff40,0);
  Ui_OpenWindow(&g_UiManager,s_WndCredits_0053ff40);
  DAT_005a41d0 = Ui_FindWindowDef(&g_UiManager,s_WndCredits_0053ff40);
  puVar3 = &DAT_005a4120;
  for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_005a41c8 = load_rtxt_bin(s_credits_bin_0053ff34,0xa000);
  Credits_Load(&g_UiManager,s_Tachycre_txt_0053ff24);
  DAT_005a41cc = DAT_005a41c0;
  Credits_ShowBlockImage(&g_UiManager,DAT_005a41bc);
  SbHotspot_Deselect(DAT_005a41b8,&DAT_005a41bc,&DAT_005a41c0,s_WndCredits_0053ff40);
  Credits_ResetImageAreas();
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  Credits_Start(&g_UiManager);
  Menu_SetVar4b38(&LAB_00445030);
  load_sbf_and_bin(&DAT_005b2b78,s_credits_0053ff1c);
  return;
}

