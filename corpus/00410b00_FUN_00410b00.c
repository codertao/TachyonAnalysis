
int FUN_00410b00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xdc);
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0xe0);
  } while (*(int *)(iVar1 + 0xe0) != param_1);
  return iVar1;
}

