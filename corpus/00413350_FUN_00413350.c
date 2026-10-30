
int FUN_00413350(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    if ((*(uint *)(*(int *)(param_1 + 0xe4) + 0x34) & param_2) != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

