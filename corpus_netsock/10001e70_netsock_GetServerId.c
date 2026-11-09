
undefined4 __cdecl netsock_GetServerId(undefined4 *param_1)

{
                    /* 0x1e70  16  netsock_GetServerId */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 2;
  }
  if (DAT_100199b0 == 1) {
    *param_1 = *(undefined4 *)(DAT_10019b00 + 0xa0);
    return 0;
  }
  *param_1 = DAT_10019c4c;
  return 0;
}

