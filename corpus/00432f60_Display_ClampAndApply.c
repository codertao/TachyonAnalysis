
/* sweep */

void Display_ClampAndApply(void)

{
  undefined1 local_10 [16];
  
  if (DAT_005b2b48 < 4) {
    DAT_005b2b48 = 4;
  }
  else if (0x18 < DAT_005b2b48) {
    DAT_005b2b48 = 0x18;
  }
  if (DAT_005b2b4c < 4) {
    DAT_005b2b4c = 4;
  }
  else if (0x18 < DAT_005b2b4c) {
    DAT_005b2b4c = 0x18;
  }
  Audio_SetCallback(local_10,DAT_005b2b44,1,DAT_005b2b48);
  Audio_SelectDriver(1);
  SbfStream_RegisterCallbacks();
  if (GLBL_spacesav[0x52] != 0) {
    Audio_Call08(DAT_005b2b40,local_10);
  }
  Audio_SetOpt_55e45c(0);
  return;
}

