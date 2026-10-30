
void FUN_0045b750(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0045c0a0(param_1);
  if (param_2[3] != 0) {
    param_2[3] = param_2[3] + -1;
    return;
  }
  if (param_2[2] != 0) {
    param_2[2] = param_2[2] + -1;
  }
  if (param_2[2] == 0) {
    iVar1 = param_2[1];
    iVar2 = *param_2;
    param_2[1] = iVar1 + 1U;
    *param_2 = iVar2 + 0x44;
    if (*(uint *)(param_1 + 0x28) <= iVar1 + 1U) {
      FUN_0045b570(param_1);
      return;
    }
    FUN_0045a190(iVar2 + 0x54);
    FUN_0045b2c0(*param_2,param_1);
    param_2[2] = *(int *)*param_2;
    param_2[3] = ((int *)*param_2)[1];
  }
  FUN_0045b6b0(param_1);
  return;
}

