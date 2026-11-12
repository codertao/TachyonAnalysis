
/* sweep */

void Loadout_Draw(void)

{
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  Loadout_UpdateSliders();
  MountLine_Draw(s_WndStarBaseCFG_0054ffc8);
  Loadout_DrawItemBars();
  return;
}

