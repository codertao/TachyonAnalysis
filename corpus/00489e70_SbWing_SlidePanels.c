
/* sweep */

void SbWing_SlidePanels(void)

{
  SbAudio_StopAll();
  Ui_StartWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,
                      s_WndStarBaseWingMan_00559700,0x22,0xfffffef7,0x19,0);
  Ui_StartWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,
                      s_WndStarBaseWingMan_00559700,0x280,0x118,0x19,0);
  DAT_0056c480 = 1;
  SbPak_SetActive(0,0);
  SbWing_SetStatLabels(0);
  return;
}

