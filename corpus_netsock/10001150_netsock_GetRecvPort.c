
undefined4 __cdecl netsock_GetRecvPort(uint *param_1)

{
                    /* 0x1150  15  netsock_GetRecvPort */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (param_1 == (uint *)0x0) {
    return 2;
  }
  *param_1 = (uint)DAT_10019c70._2_2_;
  return 0;
}

