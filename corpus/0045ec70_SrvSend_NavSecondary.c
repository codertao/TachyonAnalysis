
/* S->C 0x1028 */

void SrvSend_NavSecondary(TachConn *param_1,Quadrant *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *payload;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  EventSpec local_18;
  
  if (DAT_005a5e28 != (char *)0x0) {
    payload = (undefined4 *)NetSrv_AllocEvent();
    if (payload != (undefined4 *)0x0) {
      uVar3 = 0xffffffff;
      pcVar5 = DAT_005a5e28;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = (char *)(payload + 2);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      uVar2 = Nav_ComputeRoute(param_3,param_4,param_2,payload + 1);
      *payload = uVar2;
      local_18.quadrant = param_2;
      local_18.resend = 0x800;
      local_18._2_2_ = 0;
      local_18.flags = 0x20;
      local_18._6_2_ = 0;
      if (param_1 != (TachConn *)0x0) {
        local_18.flags = 0x24;
        local_18._6_2_ = 0;
        local_18.target = param_1;
      }
      NetSrv_QueueEvent(payload,0x1028,0x28,&local_18);
    }
  }
  return;
}

