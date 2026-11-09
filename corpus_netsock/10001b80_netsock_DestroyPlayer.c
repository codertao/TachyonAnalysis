
undefined4 __cdecl netsock_DestroyPlayer(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x1b80  6  netsock_DestroyPlayer */
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
    uVar1 = FUN_10001b10(param_1);
    return uVar1;
  }
  uVar1 = FUN_10001b40(param_1);
  return uVar1;
}

