
void FUN_004477c0(undefined4 param_1,int param_2)

{
  FUN_00447570();
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_0043e6a0(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00562b14);
  if (DAT_00562c78 != 0) {
    *(int *)(DAT_00562c78 + 0xd4) = param_2;
    if (param_2 != 0) {
      FUN_0043f840(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
      clr_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
      FUN_0043e6a0(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00598590);
      DAT_00598590 = 0;
      DAT_00562c74 = 1;
      FUN_0048e3d0(&DAT_00592fc4,
                   (*(int *)(param_2 + 0x166c) + 0x18) * *(int *)(param_2 + 0x1670) * DAT_00604488,4
                   ,s_drag_scratch_ptr_00547668,0xa100);
      FUN_004478d0(DAT_00603e40,DAT_00603e44);
    }
    Ui_RefreshWindow(&g_UiManager,param_1,0,0);
  }
  return;
}

