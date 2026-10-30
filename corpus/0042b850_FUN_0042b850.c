
void FUN_0042b850(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = param_1[1];
    if (param_3 == 1) {
      *(int *)(iVar1 + 4) = (param_1[8] << 8 | param_1[9]) << 8 | param_1[10];
    }
    else {
      *(uint *)(iVar1 + 4) =
           ((param_1[8] & 0xfffffffcU) << 8 | param_1[9] & 0xfffffffcU) << 6 | param_1[10] >> 2;
    }
    if (param_2 != 0) {
      iVar1 = param_1[5];
      do {
        FUN_004281f0(*param_1,iVar2,param_1[2],0,0xffffffff,param_1[3],param_1[4],iVar1,param_1[6]);
        iVar1 = param_1[5];
        param_2 = param_2 + -1;
        iVar2 = iVar2 + 1 + iVar1;
      } while (param_2 != 0);
    }
  }
  return;
}

