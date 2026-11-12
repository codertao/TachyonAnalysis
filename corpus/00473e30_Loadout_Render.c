
/* sweep */

void Loadout_Render(void)

{
  if ((DAT_00564ae4 != 0) || (DAT_005635dc != 0)) {
    Ui_PresentFrame();
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
  }
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  Loadout_Draw();
  Gfx_Lock(1);
  Loadout_DrawDragSave();
  ImageArea_Draw(&GLBL_UI_ELEM_LIST,DAT_00563608,0,0,0);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  Ui_DrawLabelNow(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0,0);
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  Gfx_Flip();
  Loadout_DrawDragRestore();
  return;
}

