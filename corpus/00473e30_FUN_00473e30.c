
void FUN_00473e30(void)

{
  if ((DAT_00564ae4 != 0) || (DAT_005635dc != 0)) {
    FUN_004455f0();
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
  }
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_00473e00();
  FUN_00452180(1);
  FUN_00471e50();
  FUN_0043f190(&GLBL_UI_ELEM_LIST,DAT_00563608,0,0,0);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_0043e120(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0,0);
  if (DAT_00564ae4 != 0) {
    FUN_0043e980(DAT_006022e0,DAT_006022e4);
  }
  FUN_004521c0();
  FUN_00471f40();
  return;
}

