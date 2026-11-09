
undefined4 __cdecl netsock_SetDynamicPortUsage(undefined4 param_1)

{
                    /* 0x1130  26  netsock_SetDynamicPortUsage */
  if (DAT_10019880 == 0) {
    return 1;
  }
  DAT_10019c74 = param_1;
  return 0;
}

