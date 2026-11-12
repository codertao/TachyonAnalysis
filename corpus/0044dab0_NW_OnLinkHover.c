
/* iBrowse cb 2: hand cursor (Cursor2) */

void NW_OnLinkHover(int param_1)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    Ui_SetCursor(&g_UiManager,s_Cursor2_005444a0);
  }
  return;
}

