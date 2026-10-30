
undefined4 * FUN_00430910(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (g_CurrentSavPath == '\0') {
    return (undefined4 *)0x0;
  }
  str_sprintf(&DAT_005aeda0,&DAT_00536768,&g_CurrentSavPath);
  pcVar2 = _strrchr((char *)&DAT_005aeda0,0x2e);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  uVar3 = 0xffffffff;
  pcVar2 = &DAT_0053eb68;
  do {
    pcVar7 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar2 = (char *)&DAT_005aeda0;
  do {
    pcVar6 = pcVar2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  pcVar2 = pcVar7 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return &DAT_005aeda0;
}

