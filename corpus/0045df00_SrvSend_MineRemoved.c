
/* S->C 0x1102 */

void SrvSend_MineRemoved(undefined4 param_1,Quadrant *param_2)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = param_1;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    local_18.quadrant = param_2;
    NetSrv_QueueEvent(payload,0x1102,4,&local_18);
  }
  return;
}

