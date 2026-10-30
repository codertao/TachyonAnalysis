
int FUN_00497790(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_2 == (int *)0x0) {
    return iVar2;
  }
  if (*param_2 == 0) {
    return 0;
  }
  DAT_00565794 = param_4;
  iVar1 = *(int *)param_2[7];
  if (param_2[4] == 0) {
    if ((*(byte *)(param_2 + 9) & 4) == 0) {
      if (*(int *)(*param_2 + 0x40) + param_2[8] <= iVar1) {
        iVar2 = FUN_00497620(param_2,param_2[2],param_1,param_3,0x80,param_5);
        if (iVar2 != 0) {
          param_2[8] = iVar1;
        }
      }
    }
    else if (*(int *)(*param_2 + 0x44) + param_2[8] <= iVar1) {
      iVar3 = FUN_00497620(param_2,param_2[2],param_1,param_3,0x80,param_5);
      iVar2 = 0;
      if (iVar3 != 0) {
        param_2[8] = iVar1;
        return iVar3;
      }
    }
  }
  else if (param_2[6] + param_2[8] <= iVar1) {
    iVar3 = FUN_00497730(param_2,param_1,param_3,param_5);
    iVar2 = 0;
    if (iVar3 != 0) {
      param_2[8] = iVar1;
      return iVar3;
    }
  }
  return iVar2;
}

