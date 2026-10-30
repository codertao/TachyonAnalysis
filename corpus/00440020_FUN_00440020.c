
void FUN_00440020(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      if ((*(int *)(iVar2 + 0x98) != 0) && (*(int *)(iVar2 + 0x9c) != 0)) {
        FUN_0043fe30(param_1,*(int *)(iVar2 + 0xa0) + 0x104,*(undefined4 *)(iVar2 + 0xa8),0,iVar2);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0xac;
    } while (uVar1 < *(uint *)(param_1 + 0x5c));
  }
  return;
}

