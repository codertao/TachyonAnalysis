
/* S->C 0x1003 */

void SrvSend_EntityDestroyed
               (undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint param_4,
               TachConn *param_5,undefined4 param_6,undefined4 param_7,Quadrant *param_8)

{
  undefined4 *payload;
  undefined4 uVar1;
  EventSpec local_18;
  
  uVar1._0_2_ = 0x61;
  uVar1._2_2_ = 0;
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    *payload = *param_1;
    payload[1] = param_1[1];
    payload[2] = param_1[2];
    payload[3] = param_6;
    *(char *)(payload + 5) = (char)param_2;
    *(undefined1 *)((int)payload + 0x15) = param_3;
    if (param_5 != (TachConn *)0x0) {
      uVar1._0_2_ = 99;
      uVar1._2_2_ = 0;
    }
    local_18.target = param_5;
    local_18.resend = 4;
    local_18._2_2_ = 0;
    local_18.quadrant = param_8;
    local_18._4_4_ = uVar1;
    if (param_4 == 0) {
      param_4 = FUN_00423250(param_2);
    }
    local_18.radius = param_4;
    NetSrv_QueueEvent(payload,0x1003,0x16,&local_18);
  }
  return;
}

