
/* FOLLOWING LEADER on player */

undefined4 WingCmd_FormOnMe(void)

{
  *(undefined1 *)(g_Wingman + 0x324) = 1;
  *(undefined4 *)(g_Wingman + 0x354) = 0;
  *(undefined4 *)(g_Wingman + 0xf8) = DAT_0058b064;
  Ai_SetState(g_Wingman,4);
  return 1;
}

