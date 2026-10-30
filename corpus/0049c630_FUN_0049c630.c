
int FUN_0049c630(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(PTR_DAT_0055d7cc + 8);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 4) == param_1) {
      *(undefined4 *)(iVar1 + 4) = param_2;
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

