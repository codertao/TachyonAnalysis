
/* S->C 0x1111 */

void SrvSend_StartupComplete(TachConn *param_1)

{
  undefined2 *payload;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    *payload = 0;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = param_1;
    NetSrv_QueueEvent(payload,0x1111,2,&local_18);
  }
  return;
}

