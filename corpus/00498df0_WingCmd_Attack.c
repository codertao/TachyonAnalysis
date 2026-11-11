
/* attack player's target (+0x324 = 1) */

undefined4 WingCmd_Attack(void)

{
  SpED *pSVar1;
  
  pSVar1 = g_SrvCurShip->target;
  if (pSVar1 != (SpED *)0x0) {
    *(undefined1 *)(g_Wingman + 0x324) = 1;
    *(undefined4 *)(g_Wingman + 0x354) = 0;
    *(SpED **)(g_Wingman + 0x90) = pSVar1;
    *(short *)&pSVar1->field_0xc8 = *(short *)&pSVar1->field_0xc8 + 1;
    Ai_SetState(g_Wingman,1);
    return 1;
  }
  return 0;
}

