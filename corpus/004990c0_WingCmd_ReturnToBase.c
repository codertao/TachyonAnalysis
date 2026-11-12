
/* RETURNING TO BASE */

undefined4 WingCmd_ReturnToBase(void)

{
  int local_4;
  
  local_4 = 0;
  *(undefined1 *)(g_Wingman + 0x324) = 1;
  *(undefined4 *)(g_Wingman + 0x354) = 0;
  Nav_FindSectorPath(DAT_005a5e20,DAT_005a5e1c,*(undefined4 *)(g_Wingman + 100),
                     *(undefined4 *)(g_Wingman + 100),0,&local_4,0);
  if (local_4 != 0) {
    *(int *)(g_Wingman + 0x90) = local_4;
    Ai_SetState(g_Wingman,0xe);
  }
  return 0;
}

