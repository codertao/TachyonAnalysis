
/* set the usage-record app id (15 chars); space.exe has a wrapper 0x4abb80 but never calls it */

undefined4 __cdecl netsock_SetOnlineAppIDString(undefined4 *param_1)

{
                    /* 0x1fb0  27  netsock_SetOnlineAppIDString */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  FUN_10002db0(param_1);
  return 0;
}

