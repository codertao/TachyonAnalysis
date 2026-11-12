
/* S->C 0x1115 */

void SrvSend_VoiceWav(char *param_1)

{
  char cVar1;
  char *payload;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  EventSpec local_58;
  undefined1 local_40 [64];
  
  payload = (char *)NetSrv_AllocEvent();
  if (payload != (char *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    pcVar5 = payload;
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
    local_58.resend = 0x800;
    local_58._2_2_ = 0;
    local_58.flags = 0;
    local_58._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1115,0x20,&local_58);
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_WAV_EVENT____s_005493b4,payload);
      SrvSend_TextSimple(local_40,0);
    }
  }
  return;
}

