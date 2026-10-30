
void FUN_0045c480(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    do {
      FUN_0041d9e0(iVar1,*(undefined4 *)(iVar1 + 0x10));
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (uVar2 < *(uint *)(param_1 + 0x74));
  }
  return;
}

