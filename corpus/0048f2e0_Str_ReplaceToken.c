
/* sweep: guess */

int Str_ReplaceToken(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar4 = 0xffffffff;
  pcVar5 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  cVar2 = *param_1;
  iVar7 = (~uVar4 - 1) - (~uVar3 - 1);
  iVar8 = 0;
  do {
    if (cVar2 == '\0') {
      return iVar8;
    }
    pcVar5 = param_2;
    if (cVar2 != '\0') {
      do {
        if (cVar2 != *pcVar5) break;
        cVar2 = pcVar5[(int)(param_1 + (1 - (int)param_2))];
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    }
    if (*pcVar5 == '\0') {
      iVar8 = iVar8 + 1;
      uVar3 = 0xffffffff;
      pcVar5 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar4 = 0xffffffff;
      pcVar5 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar6 = ~uVar4 - (~uVar3 - 1);
      if ((iVar7 != 0) && (iVar6 != 0)) {
        if (iVar7 < 1) {
          uVar3 = 0xffffffff;
          pcVar5 = param_3;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          pcVar5 = param_1 + (~uVar3 - 1);
          uVar3 = 0xffffffff;
          pcVar9 = param_2;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          if (-1 < iVar6) {
            iVar1 = (~uVar3 - 1) - (int)pcVar5;
            iVar6 = iVar6 + 1;
            do {
              *pcVar5 = pcVar5[(int)(param_1 + iVar1)];
              pcVar5 = pcVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else {
          uVar3 = 0xffffffff;
          pcVar5 = param_1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          pcVar5 = param_1 + iVar7 + ~uVar3;
          if (-1 < iVar6) {
            iVar1 = ~uVar3 - iVar6;
            do {
              *pcVar5 = param_1[iVar6 + iVar1];
              pcVar5 = pcVar5 + -1;
              iVar6 = iVar6 + -1;
            } while (-1 < iVar6);
          }
        }
      }
      cVar2 = *param_3;
      if (cVar2 != '\0') {
        pcVar5 = param_1;
        do {
          *pcVar5 = cVar2;
          cVar2 = pcVar5[(int)(param_3 + (1 - (int)param_1))];
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
      }
      uVar3 = 0xffffffff;
      pcVar5 = param_3;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      param_1 = param_1 + (~uVar3 - 1);
    }
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}

