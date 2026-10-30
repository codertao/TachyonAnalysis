
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417b40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0048e8c0(*(undefined2 *)(param_2 + 8));
  *(int *)(param_1 + 0x108) = iVar1 + DAT_005b39c0;
  iVar1 = FUN_0048e8c0(*(undefined2 *)(param_2 + 10));
  *(int *)(param_1 + 0x10c) = iVar1 + _DAT_005b39c4;
  iVar1 = FUN_0048e8c0(*(undefined2 *)(param_2 + 0xc));
  *(int *)(param_1 + 0x110) = iVar1 + _DAT_005b39c8;
  *(uint *)(param_1 + 0xac) = (uint)*(byte *)(param_2 + 0x14) << 0x11;
  *(uint *)(param_1 + 0xb0) = (uint)*(byte *)(param_2 + 0x15) << 0x11;
  *(uint *)(param_1 + 0xb4) = (uint)*(byte *)(param_2 + 0x16) << 0x11;
  uVar2 = FUN_0048e8c0(*(undefined2 *)(param_2 + 0xe));
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = FUN_0048e8c0(*(undefined2 *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  uVar2 = FUN_0048e8c0(*(undefined2 *)(param_2 + 0x12));
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  return;
}

