
undefined4 __cdecl netsock_GetPlayerName(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x1aa0  14  netsock_GetPlayerName */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 2;
  }
  if (DAT_100199b0 == 1) {
    uVar1 = FUN_10001a20(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_10001a50();
  return uVar1;
}

