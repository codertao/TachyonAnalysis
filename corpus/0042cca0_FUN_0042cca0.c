
undefined4 FUN_0042cca0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = FUN_004c67c0(iVar3,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(iVar3 + 0x18);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0;
}

