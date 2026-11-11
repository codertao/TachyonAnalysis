
/* FOLLOWING LEADER on player */

undefined4 WingCmd_FormOnMe(void)

{
  *(undefined1 *)(g_Wingman + 0x324) = 1;
  *(undefined4 *)(g_Wingman + 0x354) = 0;
  *(SpED_SrvPlayer **)(g_Wingman + 0xf8) = g_SrvCurShip;
  Ai_SetState(g_Wingman,4);
  return 1;
}

