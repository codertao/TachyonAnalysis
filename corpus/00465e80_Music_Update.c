
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Music_Update(void)

{
  if (DAT_005897b8 == 0) {
    if (DAT_005897b4 == 0) {
      if (DAT_005897b0 == GLBL_spacesav[0x54]) {
        return;
      }
      Music_SetTrack(0,1);
      return;
    }
    DAT_005897b4 = DAT_005897b4 + -1;
    DAT_005897b8 = 0;
    if (DAT_005897b4 < 0) {
      DAT_005897b4 = 0;
    }
  }
  else {
    DAT_005897b8 = DAT_005897b8 + -1;
    if (DAT_005897b8 < 0) {
      DAT_005897b8 = 0;
    }
  }
  DAT_005897b0 = DAT_005897b0 + _DAT_005897bc;
  if (DAT_005897b0 < 0x28) {
    DAT_005897b0 = 0x28;
  }
  if (DAT_005897b0 <= GLBL_spacesav[0x54]) {
    return;
  }
  DAT_005897b0 = GLBL_spacesav[0x54];
  return;
}

