
/* sweep */

void NetCli_Shutdown(void)

{
  DPlay_DestroyPlayer();
  DPlay_CloseSession();
  Mem_FreeTag(DAT_006af644);
  return;
}

