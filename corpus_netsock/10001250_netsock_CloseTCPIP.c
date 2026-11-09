
undefined4 netsock_CloseTCPIP(void)

{
                    /* 0x1250  4  netsock_CloseTCPIP */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac != 0) {
    netsock_CloseSession();
  }
  if (DAT_100199b8 != 0) {
    netsock_StopEnumSessions();
  }
  FUN_100057b0();
  DAT_10019884 = 0;
  return 0;
}

