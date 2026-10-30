
undefined4 FUN_0045cfc0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x9c);
  }
  return 1;
}

