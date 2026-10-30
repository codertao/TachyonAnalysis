
void FUN_00402910(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  if (*(int *)(param_1 + 0x104) != 0xb) {
    if ((*(int *)(param_1 + 0xf8) == 0) && (*(int *)(param_1 + 0x104) == 5)) {
      FUN_00401f80(param_1);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0x100) != 0) {
      FUN_004014a0(param_1);
    }
    uVar3 = FUN_0048e350();
    if ((uVar3 & 3) == 0) {
      FUN_004028b0(param_1,&DAT_00532030);
      return;
    }
    if ((uVar3 & 3) == 1) {
      FUN_004028b0(param_1,&DAT_00532060);
      return;
    }
    uVar3 = FUN_0048e350();
    iVar1 = uVar3 % 400 + param_2 * 0x32;
    *(int *)(param_1 + 0x30c) = iVar1;
    lVar2 = (longlong)iVar1 *
            (longlong)*(int *)(&DAT_005323b8 + (uint)*(ushort *)(param_1 + 0x310) * 4);
    *(uint *)(param_1 + 0x30c) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    *(undefined1 **)(param_1 + 0x304) = &LAB_004028f0;
    uVar3 = FUN_0048e350();
    FUN_004014d0(param_1,uVar3 & 0x1ffffff);
    uVar3 = FUN_0048e350();
    FUN_004014f0(param_1,uVar3 & 0x1ffffff);
  }
  return;
}

