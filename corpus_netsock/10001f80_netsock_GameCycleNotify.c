
undefined4 netsock_GameCycleNotify(void)

{
                    /* 0x1f80  11  netsock_GameCycleNotify */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  FUN_10004a80();
  return 0;
}

