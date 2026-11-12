
/* refine: first free entry of the loaded-pak table 0x6110a0 (256 x 0x18): pointer + name */

undefined4 PakTable_Add(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar5 = (char *)&DAT_006110a0;
  iVar2 = 0;
  while (*(int *)(pcVar5 + 0x14) != 0) {
    iVar2 = iVar2 + 1;
    pcVar5 = pcVar5 + 0x18;
    if (0xff < iVar2) {
      return 0;
    }
  }
  uVar3 = 0xffffffff;
  *(undefined4 *)pcVar5 = param_1;
  do {
    pcVar7 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = pcVar5;
  for (uVar4 = uVar3 >> 2; pcVar7 = pcVar7 + 4, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar5[0x14] = '\x01';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  return 1;
}

