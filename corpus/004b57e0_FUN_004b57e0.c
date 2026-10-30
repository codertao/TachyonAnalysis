
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004b57e0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  
  uVar6 = 0xffffffff;
  DAT_006695b8 = (int *)0x0;
  pcVar9 = param_1;
  do {
    pcVar10 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar10 + -uVar6;
  pcVar10 = (char *)&DAT_006694a0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar3 = Fs_Exists(param_1);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  _DAT_00669604 = Fs_GetSize(param_1);
  piVar4 = (int *)FUN_004a1620(param_1);
  DAT_006695b8 = piVar4;
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*piVar4 != DAT_0055ef60) {
    FUN_0049c530(piVar4);
    DAT_006695b8 = (int *)0x0;
    return (int *)0x0;
  }
  iVar3 = 0;
  piVar4[3] = piVar4[3] + (int)piVar4;
  piVar8 = (int *)DAT_006695b8[3];
  if (0 < DAT_006695b8[2]) {
    do {
      iVar2 = *piVar8;
      *piVar8 = iVar2 + (int)piVar4;
      FUN_004b5920(iVar2 + (int)piVar4);
      piVar8 = piVar8 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_006695b8[2]);
  }
  if (DAT_006695b8[4] != 0) {
    iVar3 = 0;
    DAT_006695b8[5] = DAT_006695b8[5] + (int)piVar4;
    DAT_006695b8[6] = DAT_006695b8[6] + (int)piVar4;
    pcVar9 = (char *)DAT_006695b8[5];
    puVar11 = (undefined4 *)DAT_006695b8[6];
    if (0 < DAT_006695b8[4]) {
      do {
        uVar5 = FUN_004b5770(pcVar9 + 1);
        *puVar11 = uVar5;
        pcVar9 = pcVar9 + *pcVar9;
        puVar11 = puVar11 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_006695b8[4]);
    }
  }
  return DAT_006695b8;
}

