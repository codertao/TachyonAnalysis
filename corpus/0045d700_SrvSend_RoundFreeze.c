
/* S->C 0x1119 */

void SrvSend_RoundFreeze(void)

{
  void *payload;
  EventSpec local_18;
  
  payload = (void *)NetSrv_AllocEvent();
  if (payload != (void *)0x0) {
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1119,2,&local_18);
    FUN_0045d6c0();
  }
  return;
}

