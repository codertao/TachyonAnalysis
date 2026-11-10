
/* DEFENDING DCB on player */

undefined4 WingCmd_CoverMe(void)

{
  int iVar1;
  
  iVar1 = DAT_0058b064;
  if (DAT_0058b064 != 0) {
    *(undefined1 *)(g_Wingman + 0x324) = 1;
    *(int *)(g_Wingman + 0x354) = iVar1;
    Ai_SetState(g_Wingman,0xd);
    return 1;
  }
  return 0;
}

