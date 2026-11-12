
/* sweep */

void Dialog_ClearActive(void)

{
  clr_bytes(&GLBL_ACTIVE_SND_CNT,0x20);
  return;
}

