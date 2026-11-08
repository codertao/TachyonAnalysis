
void FUN_0047f550(void)

{
  undefined1 local_10 [16];
  
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_005a4b4c != 0) {
      FUN_00440bd0();
      return;
    }
    FUN_0043ac90(&GLBL_UI_ELEM_LIST);
    FUN_0048bf30();
    FUN_0048d620();
    FUN_0048d1c0(local_10);
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88,local_10,0);
    FUN_0046ded0(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88);
    FUN_0047f8e0();
  }
  return;
}

