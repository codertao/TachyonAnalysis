
/* S->C 0x1110 */

void SrvSend_RosterEntry(undefined4 param_1)

{
  char cVar1;
  void *payload;
  int iVar2;
  char *pcVar3;
  EventSpec local_18;
  
  payload = (void *)NetSrv_AllocEvent();
  if (payload != (void *)0x0) {
    FUN_0045d9f0(payload,param_1);
    iVar2 = -1;
    pcVar3 = (char *)((int)payload + 8);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1110,~(ushort)iVar2 + 10 & 0xfffe,&local_18);
  }
  return;
}

