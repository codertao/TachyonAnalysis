
/* S->C 0x1034 */

void SrvSend_UiSound(undefined1 param_1,undefined1 param_2,undefined1 param_3,uint param_4,
                    undefined4 param_5,undefined4 param_6,TachConn *param_7,Quadrant *param_8)

{
  undefined1 *payload;
  EventSpec local_18;
  
  payload = (undefined1 *)NetSrv_AllocEvent();
  if (payload != (undefined1 *)0x0) {
    *payload = param_1;
    payload[1] = param_2;
    payload[2] = param_3;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18._4_4_ = param_4;
    if ((param_4 & 0x10) == 0) {
      local_18._16_4_ = param_6;
    }
    else {
      local_18._16_4_ = param_5;
    }
    local_18.target = param_7;
    local_18.quadrant = param_8;
    NetSrv_QueueEvent(payload,0x1034,4,&local_18);
  }
  return;
}

