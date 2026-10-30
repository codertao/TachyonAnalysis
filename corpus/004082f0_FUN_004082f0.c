
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004082f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = (1 << (*(byte *)(iVar1 + 8) & 0x1f)) + -1;
    if (iVar2 < *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0xc) = iVar2;
    }
    iVar2 = (1 << (*(byte *)(iVar1 + 9) & 0x1f)) + -1;
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x10) = iVar2;
    }
    if (*(int *)(param_1 + 0x14) < 1) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    if (*(int *)(param_1 + 0x18) < 1) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    iVar2 = 1 << (*(byte *)(iVar1 + 8) & 0x1f);
    if (iVar2 < *(int *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x14) = iVar2;
    }
    iVar2 = 1 << (*(byte *)(iVar1 + 9) & 0x1f);
    if (iVar2 < *(int *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x18) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0xc);
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x1c) = iVar2 * 2;
    if (iVar1 != 0) {
      *(float *)(param_1 + 0x34) = _DAT_0052e544 / (float)(1 << (*(byte *)(iVar1 + 8) & 0x1f));
      *(float *)(param_1 + 0x38) = _DAT_0052e544 / (float)(1 << (*(byte *)(iVar1 + 9) & 0x1f));
    }
  }
  return;
}

