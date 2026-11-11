
void MpCfg_EndDrag(void)

{
  FUN_004476d0();
  if (DAT_00592fc4 != 0) {
    OurFreeMem(DAT_00592fc4);
    DAT_00592fc4 = 0;
  }
  DAT_0054661c = 0xffffffff;
  DAT_00546618 = 0xffffffff;
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_0043e6a0(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00562b14);
  return;
}

