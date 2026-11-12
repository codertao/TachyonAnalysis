
/* sweep */

void Dialog_Reset(void)

{
  Mem_FreeTag(0xd000);
  Dialog_ClearActive();
  return;
}

