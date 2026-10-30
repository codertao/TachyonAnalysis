
int FUN_0041ea20(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = *(int *)(param_1 + 0x4c);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        iVar1 = FUN_004c67c0(iVar3,param_2);
        if (iVar1 == 0) {
          return iVar3;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x40;
      } while (uVar2 < *(uint *)(param_1 + 0x48));
    }
  }
  return 0;
}

