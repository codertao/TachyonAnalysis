
/* sweep: guess */

void Map_UpdateBlink(void)

{
  if ((char)DAT_00571ca0 != '\0') {
    if (DAT_00571d64 == 0) {
      DAT_00571d54 = DAT_00571d54 - DAT_00571d58;
      if (DAT_00571d54 < 0) {
        DAT_00571d54 = 0;
      }
    }
    else {
      DAT_00571d54 = DAT_00571d54 + DAT_00571d58;
      DAT_00571d4c = DAT_00571d4c + DAT_00571d50;
      DAT_00571d64 = DAT_00571d64 + -1;
      if (DAT_00571d64 == 0) {
        DAT_00571d58 = DAT_00571d58 >> 1;
        return;
      }
    }
  }
  return;
}

