
undefined4
FUN_004191f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) - ((uint)(param_3 * param_5) >> 8);
  uVar1 = 1;
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 8) < *(int *)(param_2 + 0x10)) {
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - ((uint)(param_3 * param_7) >> 8);
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - ((uint)(param_3 * param_6) >> 8);
    uVar1 = 2;
  }
  iVar2 = *(int *)(param_1 + 0x10) - ((uint)(param_4 * param_5) >> 8);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - ((uint)(param_4 * param_7) >> 8);
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - ((uint)(param_4 * param_6) >> 8);
    uVar1 = 2;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x28) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return uVar1;
}

