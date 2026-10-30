
int FUN_00412890(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0xd8);
  } while (*(int *)(iVar1 + 0xd8) != param_1);
  return iVar1;
}

