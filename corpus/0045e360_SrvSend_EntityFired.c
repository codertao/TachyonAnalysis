
/* S->C 0x1103 */

void SrvSend_EntityFired(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4
                        ,TachConn *param_5,Quadrant *param_6)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = param_1;
    *(undefined2 *)(payload + 2) = param_3;
    payload[1] = param_2;
    local_18.resend = 4;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    local_18.quadrant = param_6;
    if (param_5 != (TachConn *)0x0) {
      local_18.flags = 0x22;
      local_18._6_2_ = 0;
      local_18.target = param_5;
    }
    NetSrv_QueueEvent(payload,0x1103,0xc,&local_18);
  }
  return;
}

