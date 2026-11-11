
/* S->C 0x1012 */

void SrvSend_Respawn(TachConn *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = *param_2;
    payload[1] = param_2[1];
    payload[2] = param_2[2];
    payload[3] = *param_3;
    payload[4] = param_3[1];
    payload[5] = param_3[2];
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = param_1;
    NetSrv_QueueEvent(payload,0x1012,0x18,&local_18);
  }
  return;
}

