
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004175a0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  DAT_005b8f50 = *(undefined4 *)(param_1 + 0x22);
  pcVar4 = (char *)(param_1 + 4);
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
  pcVar5 = (char *)&DAT_005b3a04;
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
  pcVar4 = (char *)(param_1 + 0x12);
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
  pcVar5 = (char *)&DAT_005a5dd0;
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
  Bdf_LoadAndApply(&DAT_005b3a04);
  _DAT_005b9010 = *(undefined4 *)(param_1 + 0x26);
  DAT_005b39ac = (uint)*(ushort *)(param_1 + 0x2a);
  DAT_005b39b0 = (uint)*(ushort *)(param_1 + 0x2c);
  DAT_005b8f54 = (uint)*(ushort *)(param_1 + 0x2e);
  DAT_005b9014 = (uint)*(ushort *)(param_1 + 0x30);
  if (*(code **)(DAT_005b1dc4 + 0x54) != (code *)0x0) {
    (**(code **)(DAT_005b1dc4 + 0x54))(*(undefined2 *)(param_1 + 0x32));
  }
  return;
}

