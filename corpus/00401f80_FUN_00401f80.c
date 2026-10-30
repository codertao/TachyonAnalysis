
void FUN_00401f80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  for (iVar3 = iVar1; iVar2 = iVar1, iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xfc)) {
    if (*(int *)(iVar3 + 0x104) == 0xc) goto LAB_00401fd5;
  }
  while( true ) {
    iVar3 = iVar2;
    if (iVar3 == 0) {
      if (iVar1 != 0) {
        FUN_00401eb0(param_1,iVar1);
      }
      return;
    }
    if (*(int *)(iVar3 + 0x104) == 4) break;
    iVar2 = *(int *)(iVar3 + 0xfc);
  }
LAB_00401fd5:
  FUN_00401eb0(param_1,iVar3);
  return;
}

