
/* S->C 0x1125 */

void SrvSend_SubpartAttach
               (undefined4 param_1,undefined2 param_2,undefined4 param_3,Quadrant *param_4)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = param_1;
    payload[1] = param_3;
    *(undefined2 *)(payload + 2) = param_2;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    local_18.quadrant = param_4;
    NetSrv_QueueEvent(payload,0x1125,10,&local_18);
  }
  return;
}

