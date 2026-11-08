
/* zero slot, set connection id, copy player name */

void NetSrv_InitPlayerSlot(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar4 = DAT_006af78c;
  DAT_006af7e0 = param_1;
  puVar5 = param_1;
  for (uVar3 = DAT_006af78c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  param_1[2] = param_2;
  FUN_004b7a50(param_1);
  *param_1 = 1;
  param_1[0x2d] = 1;
  param_1[3] = DAT_0055e404;
  if (DAT_0055e404 == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 1;
  }
  pcVar2 = DAT_006af7e4;
  if ((param_1[1] != 0) && (pcVar2 = (char *)FUN_004a70a0(param_1[3]), pcVar2 == (char *)0x0)) {
    param_1[0xf] = s_JAKE_LOGAN_0055f02c._0_4_;
    param_1[0x10] = s_JAKE_LOGAN_0055f02c._4_4_;
    *(undefined2 *)(param_1 + 0x11) = s_JAKE_LOGAN_0055f02c._8_2_;
    cVar1 = s_JAKE_LOGAN_0055f02c[10];
    param_1[0x2f] = 1;
    param_1[0x30] = 0;
    *(char *)((int)param_1 + 0x46) = cVar1;
    return;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = (char *)(param_1 + 0xf);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  param_1[0x30] = 0;
  param_1[0x2f] = 1;
  return;
}

