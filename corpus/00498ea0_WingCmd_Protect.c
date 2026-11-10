
/* DEFENDING DCB on player's target */

undefined4 WingCmd_Protect(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0058b064 + 0x90);
  if (iVar1 != 0) {
    *(undefined1 *)(g_Wingman + 0x324) = 1;
    *(int *)(g_Wingman + 0x354) = iVar1;
    Ai_SetState(g_Wingman,0xd);
    return 1;
  }
  return 0;
}

