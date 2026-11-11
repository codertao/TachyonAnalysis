
/* S->C 0x1101 */

void SrvSend_DropPredicted(undefined4 param_1,TachConn *param_2)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = param_1;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = param_2;
    NetSrv_QueueEvent(payload,0x1101,4,&local_18);
  }
  return;
}

