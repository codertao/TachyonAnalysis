
/* hover in/out: adjust g_TitleHoverState, swap Cursor1/Cursor2 [registry name reads cbExit -
   verify] */

void cb_HoverCursor(int param_1)

{
  g_TitleHoverState = g_TitleHoverState + param_1;
  if (g_TitleHoverState < 0) {
    g_TitleHoverState = 0;
    Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
    return;
  }
  if (g_TitleHoverState == 0) {
    Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
    return;
  }
  Ui_SetCursor(&g_UiManager,s_Cursor2_005444a0);
  return;
}

