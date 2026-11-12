
/* sweep: WndStarBaseSlots */

void Slots_Enter(void)

{
  g_TitleMenu_ExitFlag = 0;
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlots_0055811c);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlots_0055811c,0xff00ff);
  MenuHotkey_SetEscape(Slots_Leave);
  MenuHotkey_SetAccept(0);
  Slots_Reset();
  Slots_UpdateCredits();
  Slots_BuildTicker();
  Slots_ToggleOdds(0);
  return;
}

