
/* sweep */

void SbJobs_ClearImage(void)

{
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobImage_0054e8c0,0x20000);
  if (DAT_00563644 != 0) {
    SbHotspot_Deselect(*(undefined4 *)(DAT_00563644 + 0x17c),DAT_00563644 + 0x180,
                       DAT_00563644 + 0x184,s_WndStarBaseJobs_00552160);
  }
  return;
}

