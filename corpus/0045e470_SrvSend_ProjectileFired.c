
/* S->C 0x1002 */

void SrvSend_ProjectileFired
               (undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
               short param_5,uint param_6,TachConn *param_7,Quadrant *param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 *payload;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = *param_1;
    payload[1] = param_1[1];
    payload[2] = param_1[2];
    *(short *)(payload + 3) = (short)((uint)*param_2 >> 0x10);
    *(short *)((int)payload + 0xe) = (short)((uint)param_2[1] >> 0x10);
    uVar1 = param_2[2];
    *(undefined1 *)((int)payload + 0x16) = param_3;
    *(short *)(payload + 4) = (short)((uint)uVar1 >> 0x10);
    *(short *)((int)payload + 0x12) = (short)DAT_005897e4 - param_5;
    payload[6] = param_9;
    *(undefined1 *)((int)payload + 0x17) = param_4;
    local_18.target = param_7;
    local_18._4_4_ = param_6 | 0x61;
    local_18.resend = 1;
    local_18._2_2_ = 0;
    local_18.radius = 0xfa00000;
    local_18.quadrant = param_8;
    NetSrv_QueueEvent(payload,0x1002,0x1c,&local_18);
  }
  return;
}

