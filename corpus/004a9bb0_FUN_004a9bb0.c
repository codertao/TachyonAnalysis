
undefined4 FUN_004a9bb0(int *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  
  iVar2 = 4;
  bVar8 = true;
  piVar6 = &DAT_0052ee88;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *param_1 == *piVar6;
    param_1 = param_1 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    return 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar7 = (char *)&DAT_0056495c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 0;
}

