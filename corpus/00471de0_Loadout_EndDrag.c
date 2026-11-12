
void Loadout_EndDrag(void)

{
  Loadout_DrawDragRestore();
  if (DAT_00577f70 != 0) {
    OurFreeMem(DAT_00577f70);
    DAT_00577f70 = 0;
  }
  DAT_0054f880 = 0xffffffff;
  DAT_0054f87c = 0xffffffff;
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c,0x20000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,&DAT_00562b14);
  return;
}

