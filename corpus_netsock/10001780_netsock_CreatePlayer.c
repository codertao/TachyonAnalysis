
undefined4 __cdecl netsock_CreatePlayer(int *param_1,undefined4 *param_2,byte param_3)

{
                    /* 0x1780  5  netsock_CreatePlayer */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if ((param_1 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 2;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if (DAT_100199b0 == 1) {
    FUN_10001630(param_1,param_2,param_3);
    return 0;
  }
  FUN_10001700(param_1,param_2);
  return 0;
}

