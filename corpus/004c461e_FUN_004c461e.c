
void FUN_004c461e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_006caec8 == 0) {
    FUN_004c5458();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_00564f6c; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_00564f98 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_00564f6c;
  pcVar6 = DAT_00564f6c;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_004c1790(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_004bd512(DAT_00564f6c);
  DAT_00564f6c = (char *)0x0;
  *puVar3 = 0;
  DAT_006caec4 = 1;
  return;
}

