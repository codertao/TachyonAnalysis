
/* S->C 0x1117 */

void SrvSend_ResupplyNotice(undefined2 param_1,undefined4 param_2,TachConn *param_3)

{
  undefined2 *payload;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    *payload = param_1;
    *(undefined4 *)(payload + 1) = param_2;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = param_3;
    NetSrv_QueueEvent(payload,0x1117,6,&local_18);
  }
  return;
}

