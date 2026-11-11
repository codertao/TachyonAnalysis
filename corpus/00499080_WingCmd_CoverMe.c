
/* DEFENDING DCB on player */

undefined4 WingCmd_CoverMe(void)

{
  SpED_SrvPlayer *pSVar1;
  
  pSVar1 = g_SrvCurShip;
  if (g_SrvCurShip != (SpED_SrvPlayer *)0x0) {
    *(undefined1 *)(g_Wingman + 0x324) = 1;
    *(SpED_SrvPlayer **)(g_Wingman + 0x354) = pSVar1;
    Ai_SetState(g_Wingman,0xd);
    return 1;
  }
  return 0;
}

