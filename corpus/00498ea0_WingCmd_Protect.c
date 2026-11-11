
/* DEFENDING DCB on player's target */

undefined4 WingCmd_Protect(void)

{
  SpED *pSVar1;
  
  pSVar1 = g_SrvCurShip->target;
  if (pSVar1 != (SpED *)0x0) {
    *(undefined1 *)(g_Wingman + 0x324) = 1;
    *(SpED **)(g_Wingman + 0x354) = pSVar1;
    Ai_SetState(g_Wingman,0xd);
    return 1;
  }
  return 0;
}

