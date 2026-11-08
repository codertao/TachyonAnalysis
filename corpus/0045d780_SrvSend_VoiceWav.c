
/* S->C 0x1115 */

void SrvSend_VoiceWav(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_40 [64];
  
  pcVar2 = (char *)maybe_take_some_mem();
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar6 = pcVar2;
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
    local_58 = 0x800;
    local_54 = 0;
    NetSrv_QueueEvent(pcVar2,0x1115,0x20,&local_58);
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_WAV_EVENT____s_005493b4,pcVar2);
      FUN_0045d9d0(local_40,0);
    }
  }
  return;
}

