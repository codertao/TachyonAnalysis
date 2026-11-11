
/* S->C 0x1004 */

void SrvSend_ProjectileImpact
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
               TachConn *param_5,undefined4 param_6,Quadrant *param_7)

{
  undefined4 *payload;
  uint uVar1;
  EventSpec local_18;
  
  uVar1 = 0;
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    if (param_5 != (TachConn *)0x0) {
      uVar1 = 2;
    }
    payload[3] = param_2;
    payload[4] = param_6;
    *(short *)((int)payload + 0x16) = (short)((uint)*param_3 >> 0x10);
    *(short *)(payload + 6) = (short)((uint)param_3[1] >> 0x10);
    *(short *)((int)payload + 0x1a) = (short)((uint)param_3[2] >> 0x10);
    *(undefined2 *)(payload + 5) = param_4;
    *payload = *param_1;
    payload[1] = param_1[1];
    payload[2] = param_1[2];
    local_18.target = param_5;
    local_18._4_4_ = uVar1 | 0x61;
    local_18.resend = 4;
    local_18._2_2_ = 0;
    local_18.radius = 0x1770000;
    local_18.quadrant = param_7;
    NetSrv_QueueEvent(payload,0x1004,0x1c,&local_18);
  }
  return;
}

