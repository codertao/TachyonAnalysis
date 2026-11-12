
/* sweep */

undefined4 NetSock_CreatePlayer(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_98 [128];
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_0055e3e0 != 0) {
    pcVar5 = local_98;
    for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
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
    pcVar6 = local_98;
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
    local_14 = param_4;
    local_18 = param_3;
    iVar2 = netsock_CreatePlayer(&DAT_0055e3fc,local_98,param_2 != 0);
    if (iVar2 != 0) {
      return 1;
    }
    if (param_2 != 0) {
      DAT_0055e400 = DAT_0055e3fc;
    }
  }
  return 0;
}

