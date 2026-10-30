
void FUN_0040b830(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      FUN_00431960(iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  FUN_0040b7e0(*(undefined4 *)(param_1 + 8));
  FUN_0049c530(*(undefined4 *)(param_1 + 0x10));
  FUN_0049c530(*(undefined4 *)(param_1 + 4));
  FUN_0049c530(param_1);
  return;
}

