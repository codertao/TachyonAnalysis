
void FUN_00403170(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar1 = FUN_004015e0(param_1);
      *(int *)(param_1 + 0x90) = iVar1;
      *(undefined1 *)(param_1 + 0x326) = 0;
      *(undefined4 *)(param_1 + 0x328) = 0;
      if (iVar1 == 0) {
        FUN_00401e20(param_1);
        return;
      }
      *(short *)(iVar1 + 200) = *(short *)(iVar1 + 200) + 1;
    }
    *(undefined1 **)(param_1 + 0x304) = &LAB_004030d0;
  }
  return;
}

