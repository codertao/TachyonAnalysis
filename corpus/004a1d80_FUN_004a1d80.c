
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1d80(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_005640a0 = 0;
  DAT_00564090 = 0;
  _DAT_005640a4 = 0;
  DAT_00564094 = 0;
  _DAT_005640a8 = 0;
  _DAT_005640ac = 0;
  DAT_00564098 = 0;
  DAT_00564008 = 0;
  DAT_00564009 = 0;
  DAT_0056400a = 0;
  DAT_0056400b = 0;
  DAT_0056400c = 0;
  DAT_0056400d = 0;
  DAT_0056400e = 0;
  DAT_0056400f = 0;
  DAT_00564010._0_1_ = 0;
  DAT_00564050._0_1_ = 0;
  DAT_0056409c = 0;
  if (param_1 == 0) {
    DAT_005640d0 = 0;
    return;
  }
  DAT_005640d0 = param_1;
  DAT_00564008 = (*(byte *)(param_1 + 0x38) & 1) != 0;
  DAT_00564009 = (*(byte *)(param_1 + 0x38) & 2) != 0;
  DAT_0056400a = (*(byte *)(param_1 + 0x38) & 4) != 0;
  DAT_0056400b = (*(byte *)(param_1 + 0x38) & 8) != 0;
  DAT_0056400c = (*(byte *)(param_1 + 0x38) & 0x10) != 0;
  DAT_0056400d = (*(byte *)(param_1 + 0x38) & 0x20) != 0;
  DAT_0056400e = (*(byte *)(param_1 + 0x38) & 0x40) != 0;
  DAT_0056400f = (*(byte *)(param_1 + 0x38) & 0x80) != 0;
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(param_1 + 0xc);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_00564010;
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
  uVar2 = 0xffffffff;
  pcVar4 = *(char **)(param_1 + 0x10);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_00564050;
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
  DAT_00564090 = *(undefined4 *)(param_1 + 0x14);
  DAT_00564094 = *(undefined4 *)(param_1 + 0x18);
  DAT_00564098 = *(undefined4 *)(param_1 + 0x1c);
  DAT_0056409c = *(undefined4 *)(param_1 + 0x20);
  _DAT_005640a0 = *(undefined4 *)(param_1 + 0x24);
  _DAT_005640a4 = *(undefined4 *)(param_1 + 0x28);
  _DAT_005640a8 = *(undefined4 *)(param_1 + 0x2c);
  _DAT_005640ac = *(undefined4 *)(param_1 + 0x30);
  return;
}

