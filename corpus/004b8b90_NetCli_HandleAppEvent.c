
/* dedup by tag ring, deliver live/stale via 0x6af590 */

void NetCli_HandleAppEvent(int param_1)

{
  int iVar1;
  
  iVar1 = NetCli_HasSeenEvent(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    NetCli_RecordEventSeen(*(undefined4 *)(param_1 + 4));
    if (DAT_006af624 == DAT_006af620) {
      NetCli_DispatchEvent1();
      return;
    }
    NetCli_DispatchEvent0(param_1);
  }
  return;
}

