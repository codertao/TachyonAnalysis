
void FUN_00435c50(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar2 = Var_GetTable(s_REGION_NAMES_00534294,param_1);
  pcVar3 = (char *)Var_GetKeyByIndex(uVar2);
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar6 + -uVar4;
  pcVar6 = (char *)&DAT_005a5dd0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_00435bf0(&DAT_005a5dd0);
  return;
}

