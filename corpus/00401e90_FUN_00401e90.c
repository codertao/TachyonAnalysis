
int FUN_00401e90(int param_1,int param_2)

{
  int iVar1;
  
  do {
    iVar1 = param_2;
    if (iVar1 == 0) {
      return 0;
    }
    param_2 = *(int *)(iVar1 + 0xfc);
  } while (*(int *)(iVar1 + 0xfc) != param_1);
  return iVar1;
}

