
void FUN_00403f70(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_DCB__x_destroyed_00532624,param_1);
  FUN_004329a0(local_80);
  FUN_00403bd0(param_1 + 0x34,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
  if (*(int *)(param_1 + 0x90) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x90) + 200);
    *psVar1 = *psVar1 + -1;
  }
  if (DAT_005653f4 != 0) {
    if (*(short *)(DAT_005653f4 + 0x76) == 1) {
      iVar2 = FUN_004344a0(param_1);
      if (iVar2 == 0) {
        *(int *)(DAT_005653f4 + 0xe4) = *(int *)(DAT_005653f4 + 0xe4) + 1;
      }
      else {
        *(int *)(DAT_005653f4 + 0xe0) = *(int *)(DAT_005653f4 + 0xe0) + 1;
        FUN_004525c0(1);
      }
    }
    else if ((*(short *)(DAT_005653f4 + 0x76) == 2) &&
            (*(char *)(DAT_005653f4 + 0xc2) != *(char *)(param_1 + 0xc2))) {
      FUN_00403c10(DAT_005653f4);
    }
  }
  FUN_00403e10(param_1,*(undefined4 *)(param_1 + 0xd8));
  iVar2 = FUN_00434890(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    FUN_0041f5e0(iVar2);
  }
  FUN_00402020(param_1,*(undefined4 *)(param_1 + 0xd8));
  return;
}

