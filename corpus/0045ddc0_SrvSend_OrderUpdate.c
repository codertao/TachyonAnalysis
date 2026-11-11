
/* S->C 0x1017 */

void SrvSend_OrderUpdate(undefined2 param_1,undefined2 param_2,Quadrant *param_3)

{
  undefined2 *payload;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    payload[1] = param_2;
    *payload = param_1;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    local_18.quadrant = param_3;
    NetSrv_QueueEvent(payload,0x1017,4,&local_18);
  }
  return;
}

