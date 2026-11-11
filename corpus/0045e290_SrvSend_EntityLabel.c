
/* S->C 0x1113 */

void SrvSend_EntityLabel(undefined4 param_1,char *param_2,TachConn *param_3)

{
  char cVar1;
  undefined4 *payload;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  EventSpec local_18;
  
  payload = (undefined4 *)NetSrv_AllocEvent();
  if (payload != (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
    *payload = param_1;
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
    pcVar6 = (char *)(payload + 1);
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
    local_18.target = param_3;
    iVar4 = -1;
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 4;
    local_18._6_2_ = 0;
    pcVar5 = (char *)(payload + 1);
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    NetSrv_QueueEvent(payload,0x1113,~(ushort)iVar4 + 5 & 0xfffe,&local_18);
  }
  return;
}

