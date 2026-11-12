
/* sweep: STARBASES */

void Starbase_GetName(undefined4 param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = Var_GetTable(s_STARBASES_00532e38);
  if ((iVar2 != 0) && (param_2 != (char *)0x0)) {
    if (param_3 <= param_4) {
      *param_2 = '\0';
      return;
    }
    pcVar3 = param_2;
    for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
    pcVar3 = (char *)Var_GetKeyByIndex(iVar2,param_1);
    if (pcVar3 == (char *)0x0) {
      *param_2 = '\0';
      return;
    }
    if (param_4 == 0xffffffff) {
      uVar4 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (param_3 - 1 < ~uVar4 - 1) {
        _strncpy(param_2,pcVar3,param_3 - 1);
        return;
      }
      uVar4 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _strncpy(param_2,pcVar3,~uVar4 - 1);
      return;
    }
    uVar4 = 0xffffffff;
    pcVar5 = pcVar3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (param_3 - 1 < ~uVar4 - 1) {
      _strncpy(param_2,pcVar3,param_3 - 1);
      param_2[param_4] = '\0';
      return;
    }
    uVar4 = 0xffffffff;
    pcVar5 = pcVar3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _strncpy(param_2,pcVar3,~uVar4 - 1);
    param_2[param_4] = '\0';
  }
  return;
}

