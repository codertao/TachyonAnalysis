
int ModelPool_FindByName(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 8);
  iVar2 = 0;
  param_2 = param_2 + 0xc;
  do {
    if (*piVar3 != 0) {
      iVar1 = str_cmp(param_2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 10;
    param_2 = param_2 + 0x28;
  } while (iVar2 < 0x100);
  return -1;
}

