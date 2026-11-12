
/* sweep */

void SbJobsDone_ShowImage1(void)

{
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobCompImage_0054e8b0,0x20000);
  if (DAT_0056364c != 0) {
    SbHotspot_Deselect(*(undefined4 *)(DAT_0056364c + 0x19c),DAT_0056364c + 0x1a0,
                       DAT_0056364c + 0x1a4,s_WndStarBaseJobsComplete_0055227c);
  }
  return;
}

