
int FUN_004b0980(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar7 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x3c);
  piVar5 = (int *)FUN_0049c5c0(iVar2 * 8);
  piVar8 = piVar5;
  for (iVar6 = (*(uint *)(param_1 + 0x2c) & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)piVar8 = 0;
    piVar8 = (int *)((int)piVar8 + 1);
  }
  iVar6 = FUN_004b08e0(param_1,piVar5);
  *(int *)(param_1 + 4) = iVar6;
  iVar1 = (iVar1 * 3 + iVar3 + iVar7) * 0x10 + iVar4 * 0xc + 0x5c + iVar2 * 0x1c + iVar6 * 0x18;
  piVar8 = piVar5;
  for (iVar7 = *(int *)(param_1 + 0x2c); iVar7 != 0; iVar7 = iVar7 + -1) {
    iVar2 = *piVar8;
    piVar8 = piVar8 + 2;
    iVar1 = iVar1 + iVar2 * 6;
  }
  FUN_0049c600(piVar5);
  return iVar1 + *(int *)(param_1 + 0x34) * 0xc;
}

