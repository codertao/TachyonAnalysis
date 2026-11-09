
undefined4 netsock_StopEnumSessions(void)

{
                    /* 0x1990  30  netsock_StopEnumSessions */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100199b8 == 0) {
    return 8;
  }
  DAT_100199bc = 1;
  do {
    Sleep(10);
  } while (DAT_100199b8 != 0);
  return 0;
}

