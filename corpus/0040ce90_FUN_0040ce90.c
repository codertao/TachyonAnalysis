
void FUN_0040ce90(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[3];
    param_1[3] = iVar1 + param_2;
    if ((int)DAT_005b97bc[2] < iVar1 + param_2) {
      param_1[3] = DAT_005b97bc[2];
    }
    FUN_0040cd80(param_1);
    uVar2 = FUN_0040c960(*DAT_005b97bc,param_1[1] + 1,param_1[1],0);
    FUN_0045e760(*param_1,param_1[3],uVar2);
    FUN_0040aa20(param_1[6],(int)param_1[3] / (int)DAT_005b97bc[1]);
    FUN_0040cc10(param_1);
  }
  return;
}

