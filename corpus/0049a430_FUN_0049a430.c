
void FUN_0049a430(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x44);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (*(int *)(iVar2 + 0xc) * 5 + 5) * 4;
      FUN_00499ee0(param_1,iVar2);
    }
    iVar2 = iVar2 + 0x1c;
  }
  return;
}

