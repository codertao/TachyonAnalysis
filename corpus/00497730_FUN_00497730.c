
int FUN_00497730(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((*(int *)(*param_1 + 0x50) == 0) && (*param_3 < param_1[5])) {
    return 0;
  }
  iVar2 = param_1[1];
  uVar4 = 0;
  if (param_1[3] != 0) {
    do {
      iVar1 = FUN_00497620(param_1,iVar2,param_2,param_3,param_1[10],param_4);
      iVar3 = iVar3 + iVar1;
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (uVar4 < (uint)param_1[3]);
  }
  return iVar3;
}

