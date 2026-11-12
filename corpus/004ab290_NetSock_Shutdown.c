
/* sweep */

void NetSock_Shutdown(void)

{
  if (DAT_0055e3e0 != 0) {
    DPlay_FreeAllSessions();
    netsock_Close();
    Mem_FreeTemp(DAT_005649a0);
    DAT_005649a0 = 0;
    DAT_0055e3e0 = 0;
  }
  return;
}

