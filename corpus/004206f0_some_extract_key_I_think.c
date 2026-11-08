
int some_extract_key_I_think(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xcb4;
  }
  uVar3 = 0xffffffff;
  iVar2 = 0;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = iVar5 + (int)param_1[iVar2] * (int)param_1[iVar2] + iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return iVar5 + 0x32 + iVar4;
}

