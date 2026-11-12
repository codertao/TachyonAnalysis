
/* S->C 0x1020 */

void SrvSend_EntityFiredAt
               (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,Quadrant *param_6,undefined1 param_7,undefined2 param_8)

{
  undefined1 *payload;
  EventSpec local_18;
  
  payload = (undefined1 *)NetSrv_AllocEvent();
  if (payload != (undefined1 *)0x0) {
    *payload = param_1;
    *(undefined2 *)(payload + 0x16) = param_8;
    *(undefined4 *)(payload + 0xe) = param_4;
    payload[1] = param_7;
    *(undefined4 *)(payload + 0x12) = param_5;
    f16_EncodeVec(param_2,payload + 2);
    f16_EncodeVec(param_3,payload + 8);
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    local_18.quadrant = param_6;
    NetSrv_QueueEvent(payload,0x1020,0x18,&local_18);
  }
  return;
}

