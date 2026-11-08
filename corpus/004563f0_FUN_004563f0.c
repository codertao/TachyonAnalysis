
undefined4 FUN_004563f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 != 0) {
    switch(param_3) {
    case 3:
    case 4:
      iVar2 = Shield_GetMax(param_1,param_2);
      if ((param_1[2] != iVar2) || (param_1[4] != iVar2)) {
        iVar1 = param_1[2] + (param_4 >> 2);
        iVar3 = param_1[4] + (param_4 >> 2);
        param_1[2] = iVar1;
        param_1[4] = iVar3;
        if (iVar2 < iVar1) {
          param_1[2] = iVar2;
        }
        if (iVar2 < iVar3) {
          param_1[4] = iVar2;
        }
        return 1;
      }
      break;
    case 5:
      if ((param_1[2] != 0) || (param_1[4] != 0)) {
        iVar2 = *param_1;
        iVar1 = FUN_00455e20(param_1,param_2);
        if (iVar2 < iVar1) {
          iVar1 = param_1[2];
          iVar3 = param_4;
          if (iVar1 < param_4) {
            iVar3 = iVar1;
          }
          *param_1 = iVar2 + iVar3;
          param_1[2] = iVar1 - param_4;
          if (iVar1 - param_4 < 0) {
            param_1[2] = 0;
          }
          iVar2 = param_1[4];
          iVar1 = param_4;
          if (iVar2 < param_4) {
            iVar1 = iVar2;
          }
          *param_1 = *param_1 + iVar1;
          param_1[4] = iVar2 - param_4;
          if (iVar2 - param_4 < 0) {
            param_1[4] = 0;
          }
          iVar2 = FUN_00455e20(param_1,param_2);
          if (iVar2 < *param_1) {
            iVar2 = FUN_00455e20(param_1,param_2);
            *param_1 = iVar2;
          }
          return 1;
        }
      }
      break;
    case 6:
      if ((param_1[2] != 0) || (param_1[4] != 0)) {
        iVar2 = param_1[6];
        iVar1 = FUN_00455e00(param_1,param_2);
        if (iVar2 < iVar1) {
          iVar1 = param_1[2];
          iVar3 = param_4;
          if (iVar1 < param_4) {
            iVar3 = iVar1;
          }
          param_1[6] = iVar2 + iVar3;
          param_1[2] = iVar1 - param_4;
          if (iVar1 - param_4 < 0) {
            param_1[2] = 0;
          }
          iVar2 = param_1[4];
          iVar1 = param_4;
          if (iVar2 < param_4) {
            iVar1 = iVar2;
          }
          param_1[6] = param_1[6] + iVar1;
          param_1[4] = iVar2 - param_4;
          if (iVar2 - param_4 < 0) {
            param_1[4] = 0;
          }
          iVar2 = FUN_00455e00(param_1,param_2);
          if (iVar2 < param_1[6]) {
            iVar2 = FUN_00455e00(param_1,param_2);
            param_1[6] = iVar2;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

