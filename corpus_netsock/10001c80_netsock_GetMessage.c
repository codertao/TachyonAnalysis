
undefined4 __cdecl netsock_GetMessage(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
                    /* 0x1c80  12  netsock_GetMessage */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (DAT_100199b0 == 1) {
      uVar1 = FUN_10001be0(param_1,param_2,param_3);
      return uVar1;
    }
    uVar1 = FUN_10001c30(param_1,param_2,param_3);
    return uVar1;
  }
  return 2;
}

