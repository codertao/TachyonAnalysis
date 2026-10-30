
int FUN_0049d0a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (param_1 == 0) {
    return -1;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + 0x24);
    do {
      if ((*piVar3 != 0) && (*(char *)((int)piVar3 + -1) != '\0')) {
        iVar1 = FUN_0049c780(*piVar3);
        iVar2 = iVar2 + iVar1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0xd;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return iVar2;
}

