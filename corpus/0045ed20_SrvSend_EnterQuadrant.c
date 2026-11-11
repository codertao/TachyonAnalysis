
/* S->C 0x1007 */

void SrvSend_EnterQuadrant
               (undefined4 *param_1,undefined4 *param_2,int param_3,char *param_4,undefined1 param_5
               ,undefined1 param_6,TachConn *param_7)

{
  char cVar1;
  undefined4 *payload;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    param_7->inQuadrant = 0;
    if (param_1 != (undefined4 *)0x0) {
      *payload = *param_1;
      payload[1] = param_1[1];
      payload[2] = param_1[2];
      payload[3] = *param_2;
      *(undefined2 *)(payload + 4) = *(undefined2 *)(param_2 + 1);
    }
    *(undefined2 *)((int)payload + 0x12) = *(undefined2 *)(param_3 + 0x30);
    *(undefined1 *)((int)payload + 0x15) = param_6;
    *(undefined1 *)(payload + 5) = param_5;
    uVar2 = 0xffffffff;
    pcVar4 = (char *)(*(int *)(param_3 + 0x3c) + 0x2c);
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    pcVar5 = (char *)((int)payload + 0x16);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      *(undefined1 *)(payload + 9) = 0;
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pcVar4 = param_4;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar4 = param_4 + 1;
        cVar1 = *param_4;
        param_4 = pcVar4;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar4 = pcVar4 + -uVar2;
      pcVar5 = (char *)(payload + 9);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    local_18.target = param_7;
    NetSrv_QueueEvent(payload,0x1007,0x34,&local_18);
    if ((g_FlightStateFlags & 4) != 0) {
      SrvSend_NavPrimary(param_7,param_3,DAT_005a5e0c,DAT_005a5e10);
      SrvSend_NavSecondary(param_7,param_3,DAT_005a5e14,DAT_005a5e18);
      FUN_00450940(param_3);
      return;
    }
    SrvSend_NavPrimary(param_7,param_3,param_7->navPrimary,param_7->navSecondary);
  }
  return;
}

