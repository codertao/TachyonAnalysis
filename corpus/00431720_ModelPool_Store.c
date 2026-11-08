
void ModelPool_Store(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = ModelPool_FindFree(param_1);
  param_2[2] = param_1;
  *(undefined4 *)(param_1 + 8 + iVar2 * 0x28) = *param_2;
  pcVar7 = (char *)(param_1 + 8 + iVar2 * 0x28);
  uVar3 = 0xffffffff;
  *(undefined4 *)(pcVar7 + 0x24) = param_4;
  do {
    pcVar6 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar7;
  for (uVar4 = uVar3 >> 2; pcVar6 = pcVar6 + 4, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = param_5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar6 + -uVar3;
  pcVar7 = pcVar7 + 0x14;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  param_2[1] = iVar2;
  return;
}

