
/* sweep */

void TitleMenu_Draw(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x27f;
  local_4 = 0x1df;
  TitleBg_Draw();
  Ui_DrawAll(&g_UiManager);
  Ui_RefreshWindow(&g_UiManager,s_WndMainTitle_00544480,&local_10,0);
  return;
}

