
int __cdecl netsock_Status_NWPing(undefined4 *param_1)

{
                    /* 0x20a0  29  netsock_Status_NWPing */
  if (DAT_10019c88 != 0) {
    return 9;
  }
  if (DAT_10019c8c == 0) {
    return 8;
  }
  *param_1 = DAT_10019c96;
  return DAT_10019c8c;
}

