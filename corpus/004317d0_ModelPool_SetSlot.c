
/* load pak+palette into a fixed slot (no-op if slot already used) */

void ModelPool_SetSlot(char *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_4 + 8 + param_2 * 0x28);
  if (*piVar8 == 0) {
    iVar2 = Pak_Load(param_1,param_3,param_3);
    uVar3 = 0xffffffff;
    *piVar8 = iVar2;
    piVar8[9] = 1;
    do {
      pcVar7 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar5 = (int *)(pcVar7 + -uVar3);
    piVar6 = piVar8;
    for (uVar4 = uVar3 >> 2; piVar6 = piVar6 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar6 = (char)*piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    uVar3 = 0xffffffff;
    do {
      pcVar7 = param_3;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = piVar8 + 5;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  return;
}

