
/* S->C 0x1014 */

void SrvSend_EntityStateOp
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,uint param_4,
               Quadrant *param_5,TachConn *param_6)

{
  undefined2 *payload;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    *payload = param_1;
    payload[1] = param_3;
    *(undefined4 *)(payload + 2) = param_2;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18._4_4_ = 0x20;
    local_18.radius = param_4;
    local_18.quadrant = param_5;
    if (param_4 != 0) {
      local_18._4_4_ = 0x21;
    }
    if (param_6 != (TachConn *)0x0) {
      local_18.target = param_6;
      local_18._4_4_ = local_18._4_4_ | 2;
    }
    NetSrv_QueueEvent(payload,0x1014,8,&local_18);
  }
  return;
}

