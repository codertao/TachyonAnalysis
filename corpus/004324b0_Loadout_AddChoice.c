
/* sweep */

void Loadout_AddChoice(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = DAT_005a73dc;
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar6;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  iVar1 = DAT_005a73dc * 0x4c;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = &DAT_005a6a5c + iVar1;
  DAT_005a73dc = DAT_005a73dc + 1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  __strupr(&DAT_005a6a5c + iVar1);
  *(undefined4 *)(&DAT_005a6a9c + iVar1) = param_2;
  (&DAT_005a6aa0)[iVar3 * 0x13] = param_3;
  (&DAT_005a6aa4)[iVar3 * 0x13] = param_4;
  return;
}

