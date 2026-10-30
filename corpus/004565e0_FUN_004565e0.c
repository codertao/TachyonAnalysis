
uint FUN_004565e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  uVar2 = *(uint *)(iVar1 + 0x3c);
  if (uVar2 != 0) {
    uVar4 = uVar2 << 0xd;
    uVar2 = uVar2 & 0x7ffff;
    uVar3 = FUN_0048e350();
    *(uint *)(param_1 + 0x34) = uVar3 % uVar4 + *(int *)(iVar1 + 8) + uVar2 * -0x1000;
    uVar3 = FUN_0048e350();
    *(uint *)(param_1 + 0x38) = uVar3 % uVar4 + *(int *)(iVar1 + 0xc) + uVar2 * -0x1000;
    uVar3 = FUN_0048e350();
    *(uint *)(param_1 + 0x3c) = uVar3 % uVar4 + *(int *)(iVar1 + 0x10) + uVar2 * -0x1000;
    return uVar3 / uVar4;
  }
  uVar2 = *(uint *)(iVar1 + 8);
  *(uint *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x10);
  return uVar2;
}

