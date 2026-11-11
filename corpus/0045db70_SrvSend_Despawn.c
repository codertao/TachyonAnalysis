
/* S->C 0x1011 */

void SrvSend_Despawn(int param_1)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = *(undefined4 *)(param_1 + 0x78);
    local_18.quadrant = *(Quadrant **)(param_1 + 100);
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1011,4,&local_18);
  }
  return;
}

