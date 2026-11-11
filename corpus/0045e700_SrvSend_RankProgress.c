
/* S->C 0x1122 */

void SrvSend_RankProgress
               (TachConn *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    payload[1] = param_3;
    payload[3] = param_5;
    *payload = param_2;
    payload[2] = param_4;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = param_1;
    NetSrv_QueueEvent(payload,0x1122,0x10,&local_18);
  }
  return;
}

