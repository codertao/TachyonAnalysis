
int * FUN_004a3e00(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  
  pcVar2 = param_1;
  iVar3 = File_Exists(param_1);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  piVar4 = (int *)FUN_0049c7d0(0xbc,s_PFF_STRUCT_0055e134);
  piVar10 = piVar4;
  for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = pcVar2;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  piVar7 = (int *)(pcVar9 + -uVar5);
  piVar10 = piVar4;
  for (uVar6 = uVar5 >> 2; piVar10 = piVar10 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar10 = *piVar7;
    piVar7 = piVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar10 = (char)*piVar7;
    piVar7 = (int *)((int)piVar7 + 1);
    piVar10 = (int *)((int)piVar10 + 1);
  }
  iVar3 = FUN_004a0e10(pcVar2);
  *piVar4 = iVar3;
  if (iVar3 == -1) {
    FUN_0049c810(piVar4);
    piVar4[0x2d] = 1;
    return (int *)0x0;
  }
  FUN_004a0ea0(&param_1,4);
  FUN_004a0ed0(0,0);
  FUN_004a0ea0(piVar4 + 0x21,param_1);
  iVar3 = FUN_0049c7d0(piVar4[0x23] * piVar4[0x24],s_PFF_ENTRIES_0055e128);
  piVar4[0x26] = iVar3;
  FUN_004a0ed0(piVar4[0x25],0);
  FUN_004a0ea0(piVar4[0x26],piVar4[0x23] * piVar4[0x24]);
  piVar4[0x2b] = 1;
  piVar4[0x2d] = 0;
  FUN_004a3da0(piVar4);
  return piVar4;
}

