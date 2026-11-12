
/* sweep: hologram.wav */

void SbStats_StartHologram(void)

{
  ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0x20000);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,1);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0x22,SbStats_HideLabels,0);
  DAT_0056c520 = 1;
  Voice_Play(s_hologram_wav_00558914,GLBL_spacesav[0x55]);
  return;
}

