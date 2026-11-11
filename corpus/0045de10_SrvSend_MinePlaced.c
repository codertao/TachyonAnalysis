
/* S->C 0x1008 */

void SrvSend_MinePlaced(undefined4 *param_1,undefined2 param_2,uint param_3,Quadrant *param_4)

{
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = *param_1;
    payload[1] = param_1[1];
    payload[2] = param_1[2];
    *(undefined2 *)(payload + 3) = param_2;
    local_18.radius = param_3;
    local_18.resend = 4;
    local_18._2_2_ = 0;
    local_18.flags = 0x61;
    local_18._6_2_ = 0;
    local_18.quadrant = param_4;
    NetSrv_QueueEvent(payload,0x1008,0xe,&local_18);
  }
  return;
}

