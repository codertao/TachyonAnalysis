
void FUN_00451720(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    do {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0045ddc0(*(undefined4 *)(iVar2 + 0x98),2,param_2);
      FUN_00450ab0(iVar2,param_2 + 0x60);
      iVar2 = iVar1;
    } while (iVar1 != 0);
    DAT_0058f488 = iVar1;
    return;
  }
  DAT_0058f488 = 0;
  return;
}

