
/* sweep: deathmatch rules setup */

void DM_InitRules(void)

{
  clr_bytes(&DAT_005b2820,8);
  *(undefined4 *)(g_ActiveRules + 0x74) = 0;
  *(undefined4 *)(g_ActiveRules + 0x84) = 0;
  *(undefined4 *)(g_ActiveRules + 0xa4) = 0;
  DAT_00590d6c = GLBL_spacesav[0x5a];
  DAT_00590d70 = GLBL_spacesav[0x59];
  DAT_00590d74 = GLBL_spacesav[0x60];
  DAT_005b2824 = GLBL_spacesav[0x61] * 3000;
  return;
}

