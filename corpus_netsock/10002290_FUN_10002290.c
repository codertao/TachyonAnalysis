
undefined4 __cdecl FUN_10002290(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar2 = strstr(param_3,&DAT_100070b4);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  do {
    do {
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 == ' ');
  } while ((cVar1 == '\t') || (pcVar5 = pcVar2, cVar1 == '\v'));
  while (cVar1 != '\0') {
    if ((cVar1 == ' ') || (cVar1 == ';')) {
      *pcVar5 = '\0';
      break;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_4 = param_4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_4 = param_4 + 1;
  }
  return 1;
}

