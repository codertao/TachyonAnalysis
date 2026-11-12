
/* dedup by event tag ring (player+0x7c), deliver via 0x6af7a8 (live or stale) */

void NetSrv_HandleAppEvent(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = NetSrv_HasSeenEvent(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    NetSrv_RecordEventSeen(*(undefined4 *)(param_1 + 4),param_2);
    if (DAT_006af6ec == DAT_006af6e0) {
      NetSrv_DispatchEvent1();
      return;
    }
    NetSrv_DispatchEvent0(param_1);
  }
  return;
}

