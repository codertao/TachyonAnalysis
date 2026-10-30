
int FUN_0049c8f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_DAT_0055d7cc + 8);
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0xc);
  } while (*(int *)(iVar1 + 0xc) != param_1);
  return iVar1;
}

