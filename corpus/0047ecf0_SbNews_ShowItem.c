
/* sweep */

void SbNews_ShowItem(void)

{
  if (*(undefined4 **)(DAT_005636b4 + 0xbc) != (undefined4 *)0x0) {
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtNewsDescTitle_00552ca4,
                    **(undefined4 **)(DAT_005636b4 + 0xbc));
  }
  News_StopAudio();
  SbAudio_StopAll();
  SbNews_ClearImage();
  SbNews_RefreshList();
  return;
}

