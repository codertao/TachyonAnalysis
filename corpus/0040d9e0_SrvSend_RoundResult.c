
/* S->C 0x1032 */

void SrvSend_RoundResult(void)

{
  void *payload;
  EventSpec local_18;
  
  payload = (void *)NetSrv_AllocEvent();
  if (payload != (void *)0x0) {
    *(undefined2 *)((int)payload + 0x20) = (undefined2)DAT_005b97b8;
    FUN_0040d990(payload,&DAT_00533540);
    FUN_0040d990((int)payload + 0x10,s_GALSPAN_00533548);
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1032,0x24,&local_18);
  }
  return;
}

