
/* sweep */

void TachCli_ReadRoster(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  iVar4 = param_1 + 6;
  if (0 < *(short *)(param_1 + 4)) {
    do {
      CliOn_RosterEntry(iVar4);
      uVar2 = 0xffffffff;
      pcVar5 = (char *)(iVar4 + 8);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 + 10 & 0xfffffffe);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(short *)(param_1 + 4));
  }
  return;
}

