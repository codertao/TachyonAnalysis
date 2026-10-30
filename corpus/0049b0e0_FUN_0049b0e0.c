
undefined4
FUN_0049b0e0(undefined4 param_1,int param_2,undefined4 param_3,float *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint local_214;
  char local_208 [256];
  char local_108 [260];
  
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  iVar2 = *(int *)(param_5 + 0x24);
  if ((iVar2 == 0) ||
     (((piVar9 = *(int **)(iVar2 + 0x14), piVar9 == (int *)0x0 &&
       (piVar9 = *(int **)(iVar2 + 0x10), piVar9 == (int *)0x0)) || (*piVar9 == 0)))) {
    return 0;
  }
  iVar4 = FUN_004c67c0(*piVar9,param_1);
  while (iVar4 != 0) {
    *(int **)(iVar2 + 0x10) = piVar9;
    if (piVar9[4] == 0) {
      *(int **)(iVar2 + 0x10) = piVar9;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      return 0;
    }
    piVar9 = piVar9 + 5;
    *(int **)(iVar2 + 0x14) = piVar9;
    if (*piVar9 == 0) {
      return 0;
    }
    iVar4 = FUN_004c67c0(*piVar9,param_1);
  }
  uVar3 = piVar9[3];
  pfVar8 = (float *)piVar9[4];
  if ((param_4 != (float *)0x0) && (pfVar8 != (float *)0x0)) {
    if (pfVar8[3] == 1.4013e-45) {
      *param_4 = *pfVar8;
    }
    else if (pfVar8[3] == 2.8026e-45) {
      fVar5 = (float)__ftol();
      *param_4 = fVar5;
    }
    else {
      *param_4 = 0.0;
    }
  }
  if (param_2 != 0) {
    local_214 = 0;
    pcVar10 = local_108;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10 = pcVar10 + 4;
    }
    if (uVar3 != 0) {
      do {
        if (local_214 != 0) {
          uVar6 = 0xffffffff;
          pcVar10 = (char *)&DAT_0053ebb4;
          do {
            pcVar12 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar4 = -1;
          pcVar10 = local_108;
          do {
            pcVar11 = pcVar10;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar11 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar1 != '\0');
          pcVar10 = pcVar12 + -uVar6;
          pcVar12 = pcVar11 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        if (pfVar8[3] == 1.4013e-45) {
          uVar13 = CONCAT44(*pfVar8,&DAT_00535eb8);
LAB_0049b24f:
          str_sprintf(local_208,uVar13);
        }
        else {
          if (pfVar8[3] != 2.8026e-45) {
            uVar13 = CONCAT44(*pfVar8,&DAT_00536768);
            goto LAB_0049b24f;
          }
          str_sprintf(local_208,&DAT_0055d7b8,(double)*pfVar8);
        }
        uVar6 = 0xffffffff;
        pcVar10 = local_208;
        do {
          pcVar12 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pfVar8 = pfVar8 + 5;
        iVar4 = -1;
        pcVar10 = local_108;
        do {
          pcVar11 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        pcVar10 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        local_214 = local_214 + 1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      } while (local_214 < uVar3);
    }
    FUN_0049ae90(param_2,local_108,param_3);
    FUN_00499d00(param_2);
  }
  *(int **)(iVar2 + 0x14) = piVar9 + 5;
  return 1;
}

