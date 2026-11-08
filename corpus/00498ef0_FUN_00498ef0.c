
undefined4 FUN_00498ef0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x90);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xf4) != DAT_005653a0)) {
    uVar2 = *(undefined4 *)(*(int *)(DAT_005653a0 + 0x8c) + 0x56c);
    *(undefined4 *)(*(int *)(DAT_005653a0 + 0x8c) + 0x56c) =
         *(undefined4 *)((uint)*(byte *)(DAT_005653a0 + 0xc2) * 0x10 + 8 + DAT_0058f2e8);
    iVar3 = *(int *)(DAT_005653a0 + 0x8c);
    if (((*(uint *)(iVar3 + 0x56c) &
         *(uint *)((uint)*(byte *)(*(int *)(iVar1 + 0xf4) + 0xc2) * 0x10 + DAT_0058f2e8)) != 0) &&
       ((*(byte *)(*(int *)(iVar1 + 0xf4) + 0xd0) & 0x4f) != 0)) {
      *(undefined4 *)(iVar3 + 0x56c) = uVar2;
      return 1;
    }
    *(undefined4 *)(iVar3 + 0x56c) =
         *(undefined4 *)((uint)*(byte *)(DAT_005653a0 + 0xc2) * 0x10 + 0xc + DAT_0058f2e8);
    iVar3 = *(int *)(DAT_005653a0 + 0x8c);
    if (((*(uint *)(iVar3 + 0x56c) &
         *(uint *)((uint)*(byte *)(*(int *)(iVar1 + 0xf4) + 0xc2) * 0x10 + DAT_0058f2e8)) != 0) &&
       ((*(byte *)(*(int *)(iVar1 + 0xf4) + 0xd0) & 0x4f) != 0)) {
      *(undefined4 *)(iVar3 + 0x56c) = uVar2;
      return 1;
    }
    *(undefined4 *)(iVar3 + 0x56c) = uVar2;
  }
  return 0;
}

