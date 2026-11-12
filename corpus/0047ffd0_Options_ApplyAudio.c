
/* sweep: guess */

void Options_ApplyAudio(void)

{
  OptMenu_RefreshByVar(0);
  if (GLBL_spacesav[0x52] != 0) {
    Audio_StopAll();
    Display_ClampAndApply();
    Starbase_PlayMusic(DAT_00590e24);
    set_some_glbl_scalar(GLBL_spacesav[0x53]);
    return;
  }
  Starbase_PlayMusic(0);
  SbfStream_Stop();
  Audio_StopAll();
  return;
}

