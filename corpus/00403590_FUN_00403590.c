
void FUN_00403590(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x1f) == 0) {
    iVar1 = param_1 + 0xd4;
  }
  else {
    iVar1 = 0;
  }
  FUN_00424030(param_1,*(undefined4 *)(param_1 + 0xe8),*(int *)(param_1 + 0x8c) + 0x84,iVar1);
  return;
}

