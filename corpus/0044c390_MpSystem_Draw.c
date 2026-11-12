
/* sweep */

void MpSystem_Draw(void)

{
  Ui_DrawAll(&g_UiManager);
  if (DAT_00562cb4 == 0) {
    if (((DAT_00547a9c == 1) && (DAT_00562ca4 == 0)) && (DAT_00562cb8 != -1)) {
      if (DAT_00564ae4 != 0) {
        NW_DrawBrowserFrame();
        return;
      }
      NW_BlitBrowser();
      return;
    }
  }
  else {
    Ui_RefreshWindow(&g_UiManager,s_WndUserDlg_00547eb4,0,0);
  }
  return;
}

