
void FUN_00451950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x84);
  while (iVar3 = iVar1, iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x1c) == param_1) {
      iVar2 = *(int *)(iVar3 + 0x18);
      if (iVar2 == 1) {
        FUN_0045ddc0(*(undefined4 *)(iVar3 + 0x98),2,param_2);
        FUN_00450ab0(iVar3,param_2 + 0x60);
      }
      else if (iVar2 == 3) {
        FUN_0045ddc0(*(undefined4 *)(iVar3 + 0x98),1,param_2);
      }
      else if (iVar2 == 7) {
        FUN_0045ddc0(*(undefined4 *)(iVar3 + 0x98),1,param_2);
      }
    }
  }
  return;
}

