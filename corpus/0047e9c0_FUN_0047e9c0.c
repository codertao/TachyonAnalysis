
int * FUN_0047e9c0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_1;
  bVar1 = false;
  if ((param_1 == (int *)0x0) || ((char)param_1[0x1c] == '\0')) {
    return (int *)0x0;
  }
  FUN_0048e3d0(&param_1,0x24,4,s_News_Headline_00552c78,0xa100);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)piVar4;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[7] = piVar4[0x2c];
    *(undefined1 *)(param_1 + 5) = 0x4d;
  }
  if (DAT_005636a4 != (int *)0x0) {
    iVar5 = *(int *)((int)DAT_005636a4 + 0x20);
    iVar3 = (int)DAT_005636a4;
    while (iVar2 = iVar5, iVar2 != 0) {
      bVar1 = !bVar1;
      iVar3 = iVar2;
      iVar5 = *(int *)(iVar2 + 0x20);
    }
    *(int **)(iVar3 + 0x20) = param_1;
    *(byte *)(param_1 + 5) = (!bVar1 - 1U & 7) + 0x46;
    return param_1;
  }
  DAT_005636a4 = param_1;
  return param_1;
}

