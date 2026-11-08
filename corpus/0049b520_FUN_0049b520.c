
undefined4
FUN_0049b520(undefined4 param_1,undefined4 *param_2,uint param_3,float *param_4,int param_5,
            int param_6,int param_7)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_100 [64];
  
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  if ((((-1 < param_6 + -1) && (iVar2 = *(int *)(param_7 + 0x24), iVar2 != 0)) &&
      (piVar3 = *(int **)(iVar2 + 0x10), piVar3 != (int *)0x0)) &&
     ((*piVar3 != 0 && (iVar4 = str_cmp(*piVar3,param_1), iVar4 == 0)))) {
    pfVar1 = (float *)(piVar3[4] + (param_6 + -1) * 0x14);
    if (piVar3[3] < param_6) {
      *(int **)(iVar2 + 0x14) = piVar3 + 5;
      return 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      puVar7 = local_100;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (pfVar1 != (float *)0x0) {
      if (pfVar1[3] == 1.4013e-45) {
        if (param_4 != (float *)0x0) {
          if (param_5 == 2) {
            *param_4 = (float)(int)*pfVar1;
          }
          else {
            *param_4 = *pfVar1;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          str_sprintf(local_100,&DAT_00535eb8,*pfVar1);
          FUN_0049ae90(param_2,local_100,param_3);
          FUN_00499d00(param_2);
        }
      }
      else if (pfVar1[3] == 2.8026e-45) {
        if (param_4 != (float *)0x0) {
          if (param_5 == 2) {
            *param_4 = *pfVar1;
          }
          else {
            fVar5 = (float)__ftol();
            *param_4 = fVar5;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          str_sprintf(local_100,&DAT_0055d7b8,(double)*pfVar1);
          FUN_0049ae90(param_2,local_100,param_3);
          FUN_00499d00(param_2);
          *(int **)(iVar2 + 0x14) = piVar3 + 5;
          return 1;
        }
      }
      else if (param_2 != (undefined4 *)0x0) {
        FUN_0049ae90(param_2,*pfVar1,param_3);
        *(int **)(iVar2 + 0x14) = piVar3 + 5;
        return 1;
      }
      *(int **)(iVar2 + 0x14) = piVar3 + 5;
      return 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      for (uVar6 = param_3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_2 = 0;
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  return 0;
}

