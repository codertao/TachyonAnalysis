
/* S->C 0x1118 */

void SrvSend_BeamImpact(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                       undefined2 param_5,undefined4 *param_6,Quadrant *param_7)

{
  undefined2 uVar1;
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = param_1;
    payload[1] = param_2;
    *(undefined2 *)(payload + 2) = param_3;
    *(undefined2 *)((int)payload + 10) = param_4;
    *(undefined2 *)((int)payload + 0x12) = param_5;
    uVar1 = f16_Encode(*param_6);
    *(undefined2 *)(payload + 3) = uVar1;
    uVar1 = f16_Encode(param_6[1]);
    *(undefined2 *)((int)payload + 0xe) = uVar1;
    uVar1 = f16_Encode(param_6[2]);
    *(undefined2 *)(payload + 4) = uVar1;
    local_18.resend = 1;
    local_18._2_2_ = 0;
    local_18.flags = 0x60;
    local_18._6_2_ = 0;
    local_18.quadrant = param_7;
    NetSrv_QueueEvent(payload,0x1118,0x14,&local_18);
  }
  return;
}

