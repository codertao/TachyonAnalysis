
/* sweep */

void Var_GetTableKey(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  *param_3 = '\0';
  iVar2 = Var_GetTable(param_1);
  if (iVar2 != 0) {
    pcVar3 = (char *)Var_GetKeyByIndex(iVar2,param_2);
    if (pcVar3 == (char *)0x0) {
      *param_3 = '\0';
      return;
    }
    _strncpy(param_3,pcVar3,8);
    uVar4 = 0xffffffff;
    param_3[8] = '\0';
    do {
      pcVar3 = param_4;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar3 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar3;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    do {
      pcVar6 = param_3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar6;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + -uVar4;
    pcVar6 = pcVar6 + -1;
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
  }
  return;
}

