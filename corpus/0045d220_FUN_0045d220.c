
void FUN_0045d220(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x9c);
    FUN_0045cff0(iVar2,param_1);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

