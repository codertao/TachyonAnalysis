
void MpCfg_BeginDrag(undefined4 param_1,int param_2)

{
  MpCfg_EndDrag();
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  Ui_SetLabelText(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00562b14);
  if (DAT_00562c78 != 0) {
    *(int *)(DAT_00562c78 + 0xd4) = param_2;
    if (param_2 != 0) {
      ImageArea_ClearFlags(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
      clr_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
      Ui_SetLabelText(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00598590);
      DAT_00598590 = 0;
      DAT_00562c74 = 1;
      Mem_AllocZeroTagged(&DAT_00592fc4,
                          (*(int *)(param_2 + 0x166c) + 0x18) * *(int *)(param_2 + 0x1670) *
                          DAT_00604488,4,s_drag_scratch_ptr_00547668,0xa100);
      MpCfg_UpdateDragIcon(DAT_00603e40,DAT_00603e44);
    }
    Ui_RefreshWindow(&g_UiManager,param_1,0,0);
  }
  return;
}

