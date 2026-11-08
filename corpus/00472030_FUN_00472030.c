
void FUN_00472030(undefined4 param_1,int param_2)

{
  FUN_00471de0();
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c,0x20000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,&DAT_00562b14);
  *(int *)(DAT_00563608 + 0xd4) = param_2;
  if (param_2 != 0) {
    FUN_0043f840(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c,0x20000);
    clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,&DAT_00577f60);
    DAT_00577f60 = 0;
    DAT_0056360c = 1;
    FUN_0048e3d0(&DAT_00577f70,
                 (*(int *)(param_2 + 0x166c) + 0x18) * *(int *)(param_2 + 0x1670) * DAT_00604488,4,
                 s_drag_scratch_ptr_00547668,0xa100);
    FUN_00472140(DAT_00603e40,DAT_00603e44);
  }
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,param_1,0,0);
  return;
}

