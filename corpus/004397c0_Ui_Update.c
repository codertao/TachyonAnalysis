
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* per-frame UI update/draw (called by TitleMenu_Update) [tentative] */

void Ui_Update(undefined4 param_1)

{
  KeyRepeat_Update(&DAT_005a6160);
  Ui_ProcessWindowInput(param_1);
  Ui_ProcessTextEntries(param_1);
  Ui_AnimateImageAreas(param_1,1);
  Menu_RunHotkeyCallbacks();
  Ui_UpdateCursorPos();
  ScreenZoom_UpdateAll();
  if (DAT_005a4b38 != (code *)0x0) {
    (*DAT_005a4b38)(param_1);
  }
  _DAT_005a4b3c = _DAT_005a4b3c + 1;
  return;
}

