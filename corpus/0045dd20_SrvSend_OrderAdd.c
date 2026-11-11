
/* S->C 0x1016 */

void SrvSend_OrderAdd(undefined2 param_1,char *param_2,undefined2 param_3,undefined4 param_4,
                     Quadrant *param_5)

{
  char cVar1;
  undefined2 *payload;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  EventSpec local_18;
  
  payload = (undefined2 *)NetSrv_AllocEvent();
  if (payload != (undefined2 *)0x0) {
    payload[1] = param_3;
    *payload = param_1;
    *(undefined4 *)(payload + 2) = param_4;
    uVar2 = 0xffffffff;
    do {
      pcVar5 = param_2;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar5 + -uVar2;
    pcVar6 = (char *)(payload + 4);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    iVar4 = -1;
    pcVar5 = (char *)(payload + 4);
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_18.quadrant = param_5;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0x20;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1016,~(ushort)iVar4 + 10 & 0xfffe,&local_18);
  }
  return;
}

