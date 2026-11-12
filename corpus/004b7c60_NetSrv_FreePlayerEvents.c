
/* sweep: guess */

void NetSrv_FreePlayerEvents(int param_1)

{
  Mem_FreeTag(*(int *)(param_1 + 8) + 0x10 + DAT_006af7e8);
  return;
}

