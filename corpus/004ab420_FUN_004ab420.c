
int FUN_004ab420(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_100 [36];
  char local_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_0055e3e0 == 0) {
    return -1;
  }
  if (param_1 == 0) {
    return -1;
  }
  netsock_StopEnumSessions();
  puVar6 = local_100;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_30 = *(undefined4 *)(param_1 + 0x10);
  local_100[0] = 0x100;
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_28 = *(undefined4 *)(param_1 + 0x18);
  local_20 = DAT_0052e8c0;
  local_24 = *(undefined4 *)(param_1 + 0x1c);
  local_1c = DAT_0052e8c4;
  local_18 = DAT_0052e8c8;
  local_14 = DAT_0052e8cc;
  if (param_2 == (char *)0x0) {
    local_70[0] = '\0';
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar7 = local_70;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  DAT_0055e428 = 0;
  iVar2 = netsock_JoinSession(local_100);
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 != 9) {
    if (iVar2 != 0xf) {
      return (-(uint)(iVar2 != 5) & 2) - 3;
    }
    return -2;
  }
  return 1;
}

