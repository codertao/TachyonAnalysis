
void FUN_0044c390(void)

{
  FUN_0043ac90(&g_UiManager);
  if (DAT_00562cb4 == 0) {
    if (((DAT_00547a9c == 1) && (DAT_00562ca4 == 0)) && (DAT_00562cb8 != -1)) {
      if (DAT_00564ae4 != 0) {
        FUN_0044db90();
        return;
      }
      FUN_0044daf0();
      return;
    }
  }
  else {
    Ui_RefreshWindow(&g_UiManager,s_WndUserDlg_00547eb4,0,0);
  }
  return;
}

