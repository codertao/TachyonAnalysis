
/* sweep */

void SbNews_ClearImage(void)

{
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IANewsImage_00552c98,0x20000);
  if (DAT_005636b4 != 0) {
    SbHotspot_Deselect(*(undefined4 *)(DAT_005636b4 + 0xec),DAT_005636b4 + 0xf0,DAT_005636b4 + 0xf4,
                       s_WndStarBaseNews_00552c88);
  }
  return;
}

