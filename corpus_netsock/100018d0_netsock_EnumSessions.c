
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
netsock_EnumSessions
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
                    /* 0x18d0  10  netsock_EnumSessions */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if ((param_1 == 0) || (param_3 == 0)) {
    return 2;
  }
  if (DAT_100198ac != 0) {
    return 6;
  }
  if (DAT_100199b8 != 0) {
    FUN_100035f0();
    return 7;
  }
  netsock_CancelJoin();
  DAT_100199c0 = param_3;
  DAT_100199c4 = param_4;
  _DAT_100199c8 = param_5;
  DAT_100199cc = *(undefined4 *)(param_1 + 0xe0);
  DAT_100199d0 = *(undefined4 *)(param_1 + 0xe4);
  DAT_100199d4 = *(undefined4 *)(param_1 + 0xe8);
  DAT_100199d8 = *(undefined4 *)(param_1 + 0xec);
  FUN_10003730();
  return 0;
}

