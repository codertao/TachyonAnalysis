
char * FUN_004152e0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar4 = &DAT_005b7e48;
  uVar2 = 0;
  while (*(int *)(pcVar4 + 0x40) != 0) {
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 0x44;
    if (0x3f < uVar2) {
      return (char *)0x0;
    }
  }
  uVar2 = 0xffffffff;
  pcVar4[0x40] = '\x01';
  pcVar4[0x41] = '\0';
  pcVar4[0x42] = '\0';
  pcVar4[0x43] = '\0';
  do {
    pcVar5 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = pcVar4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return pcVar4;
}

