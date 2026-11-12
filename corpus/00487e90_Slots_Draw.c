
/* sweep */

void Slots_Draw(void)

{
  undefined1 local_10 [16];
  
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  Ticker_Draw();
  Ticker_GetRect(local_10);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlots_0055811c,local_10,0);
  return;
}

