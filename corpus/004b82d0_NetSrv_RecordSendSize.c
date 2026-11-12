
/* refine: append to the send-size ring */

void NetSrv_RecordSendSize(uint param_1)

{
  (&DAT_006af6fc)[DAT_006af77c] = param_1;
  DAT_006af77c = DAT_006af77c + 1;
  if (0x1f < DAT_006af77c) {
    DAT_006af77c = 0;
  }
  DAT_006af6f8 = NetSrv_AvgSendSize();
  if (DAT_006af6f4 <= param_1) {
    DAT_006af6f4 = param_1;
  }
  return;
}

