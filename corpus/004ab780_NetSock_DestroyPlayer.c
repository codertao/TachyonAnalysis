
/* sweep */

undefined4 NetSock_DestroyPlayer(void)

{
  if (DAT_0055e3e0 != 0) {
    netsock_DestroyPlayer(DAT_0055e3fc);
  }
  return 0;
}

