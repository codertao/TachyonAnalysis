
void FUN_0040c680(void)

{
  clr_bytes(&DAT_005b97a0,0x20);
  FUN_0040c4e0(s_GALSPAN_00533548,&DAT_00533078);
  FUN_0040c4e0(&DAT_00533540,&DAT_00533268);
  *(undefined1 **)(g_ActiveRules + 0x74) = &LAB_0040c550;
  *(undefined1 **)(g_ActiveRules + 0x84) = &LAB_0040c5b0;
  *(undefined1 **)(g_ActiveRules + 0xa4) = &LAB_0040c650;
  DAT_00590d70 = GLBL_spacesav[99];
  DAT_00590d6c = GLBL_spacesav[100];
  DAT_00590d74 = GLBL_spacesav[0x6a];
  if (2 < DAT_005b2b10) {
    DAT_005b2b10 = 2;
  }
  DAT_005b97bc = DAT_005b2b10 * 0xc + 0x532f78;
  return;
}

