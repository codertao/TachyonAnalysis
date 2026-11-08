
undefined4 FUN_00456310(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 != 0) {
    switch(param_3) {
    case 3:
    case 4:
      iVar2 = Shield_GetMax(param_1,param_2);
      if ((*(int *)(param_1 + 8) != iVar2) || (*(int *)(param_1 + 0x10) != iVar2)) {
        iVar3 = *(int *)(param_1 + 8) + (param_4 >> 2);
        iVar4 = *(int *)(param_1 + 0x10) + (param_4 >> 2);
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 0x10) = iVar4;
        if (iVar2 < iVar3) {
          *(int *)(param_1 + 8) = iVar2;
        }
        if (iVar2 < iVar4) {
          *(int *)(param_1 + 0x10) = iVar2;
        }
        return 1;
      }
      break;
    case 5:
      if ((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0x10) != 0)) {
        iVar2 = *(int *)(param_1 + 8) - param_4;
        *(int *)(param_1 + 8) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        piVar1 = (int *)(param_1 + 0x10);
        *piVar1 = *piVar1 - param_4;
        if (-1 < *piVar1) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 1;
      }
      break;
    case 6:
      if ((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0x10) != 0)) {
        iVar2 = *(int *)(param_1 + 8) - param_4;
        *(int *)(param_1 + 8) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        piVar1 = (int *)(param_1 + 0x10);
        *piVar1 = *piVar1 - param_4;
        if (-1 < *piVar1) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 1;
      }
    }
  }
  return 0;
}

