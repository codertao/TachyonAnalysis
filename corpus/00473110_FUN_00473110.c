
void FUN_00473110(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0xd4) = param_2;
    if (param_2 != 0) {
      iVar2 = (param_5 - *(int *)(param_2 + 0x166c)) / param_8;
      iVar1 = (param_6 / param_7 - *(int *)(param_2 + 0x1670) / *(int *)(param_2 + 0x1680)) /
              param_9;
    }
    FUN_0043f650(&DAT_00583420,param_1,iVar2 + param_3,iVar1 + param_4);
    FUN_0043f840(&DAT_00583420,param_1,0x20000);
  }
  return;
}

