
/* S->C 0x1123 */

void SrvSend_FactionProgress
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               TachConn *param_5)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = param_2;
    payload[2] = param_4;
    payload[1] = param_3;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    if (param_5 == (TachConn *)0x0) {
      local_18.flags = 0x10;
      local_18._6_2_ = 0;
      local_18._16_4_ = param_1;
    }
    else {
      local_18.flags = 4;
      local_18._6_2_ = 0;
      local_18.target = param_5;
    }
    NetSrv_QueueEvent(payload,0x1123,0xc,&local_18);
  }
  return;
}

