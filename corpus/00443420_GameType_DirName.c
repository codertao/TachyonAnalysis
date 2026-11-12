
/* sweep: BASEWARS/DEATHMATCH */

char * GameType_DirName(void)

{
  if (GLBL_spacesav[0x13] != 0) {
    return s_BASEWARS_005334c4;
  }
  return s_DEATHMATCH_00540fe0;
}

