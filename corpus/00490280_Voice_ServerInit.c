
/* netcomm; skipped in SP */

void Voice_ServerInit(void)

{
  if ((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) {
    if (DAT_00565a39 != '\0') {
      netcomm_EnableLogging(1);
    }
    netcomm_ServerInit(&DAT_0056588c,&DAT_00565888);
    DAT_006af7ec = DAT_0056588c;
    DAT_006af7f0 = DAT_00565888;
    DAT_006af7f2 = DAT_00565a34._3_1_;
    return;
  }
  DAT_006af7ec = 0;
  DAT_006af7f0 = 0;
  return;
}

