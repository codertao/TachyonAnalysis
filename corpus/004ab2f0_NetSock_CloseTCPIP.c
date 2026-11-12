
/* sweep */

undefined4 NetSock_CloseTCPIP(void)

{
  if (DAT_0055e3e0 == 0) {
    return 1;
  }
  if (DAT_0055e3e4 != 0) {
    netsock_CloseTCPIP();
    DAT_0055e3e4 = 0;
  }
  return 0;
}

