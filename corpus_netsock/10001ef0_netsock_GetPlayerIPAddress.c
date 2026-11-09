
undefined4 __cdecl netsock_GetPlayerIPAddress(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
                    /* 0x1ef0  13  netsock_GetPlayerIPAddress */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if (DAT_100199b0 != 1) {
    return 0xd;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 2;
  }
  if ((param_1 == -1) && (param_2 == (undefined4 *)0xffffffff)) {
    FUN_10003ce0();
  }
  uVar1 = FUN_100019e0(param_1);
  if (uVar1 == 0) {
    return 0xb;
  }
  if (*(int *)(uVar1 + 0xa4) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = *(undefined4 *)(*(int *)(uVar1 + 0xa4) + 4);
  return 0;
}

