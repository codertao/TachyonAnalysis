
void ns_JoinThread(void)

{
  uint uVar1;
  int local_c;
  undefined4 local_8;
  uint local_4;
  
  while (DAT_100199e8 == 0) {
    uVar1 = FUN_10005830();
    while (uVar1 != 0) {
      ns_RecvDatagram(DAT_10019c5c,DAT_10019c64,&local_c,(u_short *)&local_8,&local_4);
      if (local_c != 0) {
        ns_OnJoinReply(local_c,(short)local_8);
      }
      uVar1 = FUN_10005830();
    }
    ns_SendJoin(DAT_100199e0);
    if (DAT_100199e8 != 0) break;
    Sleep(1000);
  }
  if (DAT_10019af0 != 0) {
    DAT_100199e4 = 0;
  }
  _endthread();
  return;
}

