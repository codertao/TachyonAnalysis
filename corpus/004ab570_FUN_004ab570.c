
undefined4
FUN_004ab570(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_100 [4];
  char local_f0 [128];
  char local_70 [80];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0055e3e0 == 0) {
    return 0;
  }
  puVar6 = local_100;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_100[2] = param_3;
  local_10 = param_5;
  local_100[0] = 0x100;
  local_100[1] = 7;
  local_c = param_6;
  local_8 = param_7;
  local_4 = param_8;
  if (param_4 == (char *)0x0) {
    local_70[0] = '\0';
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_4;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar5;
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
  local_20 = DAT_0052e8c0;
  local_18 = DAT_0052e8c8;
  local_14 = DAT_0052e8cc;
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
  local_1c = DAT_0052e8c4;
  pcVar5 = pcVar5 + -uVar3;
  pcVar7 = local_f0;
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
  netsock_HostSession(local_100);
  DAT_0055e428 = 1;
  return 0;
}

