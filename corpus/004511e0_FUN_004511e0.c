
int FUN_004511e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x24);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x98) == param_1) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return iVar1;
}

