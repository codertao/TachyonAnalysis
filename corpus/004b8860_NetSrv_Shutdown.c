
/* sweep */

void NetSrv_Shutdown(void)

{
  DPlay_CloseSession();
  Mem_FreeTag(DAT_006af7e8);
  return;
}

