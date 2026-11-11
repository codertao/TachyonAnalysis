
/* S->C 0x1104 */

void SrvSend_DecoyDropped(undefined4 *param_1,TachConn *param_2,Quadrant *param_3)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = *param_1;
    payload[1] = param_1[1];
    payload[2] = param_1[2];
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x61;
    local_18._6_2_ = 0;
    local_18.quadrant = param_3;
    local_18.radius = 0x1388000;
    if (param_2 != (TachConn *)0x0) {
      local_18.flags = 99;
      local_18._6_2_ = 0;
      local_18.target = param_2;
    }
    NetSrv_QueueEvent(payload,0x1104,0xc,&local_18);
  }
  return;
}

