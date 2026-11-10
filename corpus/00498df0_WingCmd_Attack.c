
/* attack player's target (+0x324 = 1) */

undefined4 WingCmd_Attack(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0058b064 + 0x90);
  if (iVar1 != 0) {
    *(undefined1 *)(g_Wingman + 0x324) = 1;
    *(undefined4 *)(g_Wingman + 0x354) = 0;
    *(int *)(g_Wingman + 0x90) = iVar1;
    *(short *)(iVar1 + 200) = *(short *)(iVar1 + 200) + 1;
    Ai_SetState(g_Wingman,1);
    return 1;
  }
  return 0;
}

