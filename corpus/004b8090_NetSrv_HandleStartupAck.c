
/* msg 0x103 {u16 1,u32 stage} */

void NetSrv_HandleStartupAck(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = NetSrv_HasSeenEvent(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    NetSrv_RecordEventSeen(*(undefined4 *)(param_1 + 4),param_2);
    if (*(short *)(param_1 + 8) == 1) {
      NetSrv_AdvanceStartupStage(*(undefined4 *)(param_1 + 10),param_2);
    }
  }
  return;
}

