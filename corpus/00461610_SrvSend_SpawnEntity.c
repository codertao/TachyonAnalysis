
/* S->C 0x1106 */

void SrvSend_SpawnEntity(int param_1)

{
  void *payload;
  EventSpec local_18;
  
  payload = (void *)NetSrv_AllocEvent();
  if (payload != (void *)0x0) {
    *(undefined4 *)((int)payload + 0x1c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((int)payload + 0x20) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((int)payload + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    Tach_SrvWriteEntityRecordExt(param_1,(undefined4 *)(param_1 + 0x34),payload);
    local_18.quadrant = *(Quadrant **)(param_1 + 100);
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1106,0x28,&local_18);
  }
  return;
}

