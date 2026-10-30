
void FUN_004b2640(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    iVar2 = FUN_004b25a0(param_2 + 0x24);
    DAT_00668f38 = iVar2 * *(int *)(param_1 + 0x14) >> 8;
  }
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x38);
    *(undefined4 *)(param_1 + 4) = uVar3;
    return;
  }
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x38);
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  if ((*(byte *)(param_2 + 0x20) & 8) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if ((*(byte *)(param_2 + 0x20) & 0x10) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  if ((uVar1 & 0x20) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x38);
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar3;
    return;
  }
  if ((uVar1 & 0x40) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    return;
  }
  if ((uVar1 & 0x80) != 0) {
    uVar3 = FUN_004b25a0(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  return;
}

