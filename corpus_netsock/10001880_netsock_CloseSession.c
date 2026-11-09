
undefined4 netsock_CloseSession(void)

{
                    /* 0x1880  3  netsock_CloseSession */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if (DAT_100199b0 == 1) {
    FUN_100017f0();
    return 0;
  }
  FUN_10001830();
  return 0;
}

