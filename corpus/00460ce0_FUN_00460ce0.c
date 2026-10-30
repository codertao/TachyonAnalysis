
void FUN_00460ce0(int param_1)

{
  int iVar1;
  
  if (((((DAT_005897e4 ^ *(uint *)(param_1 + 0x10c)) & 0x7f) == 0) &&
      (*(int *)(param_1 + 0x14c) != 0)) &&
     ((*(uint *)(*(int *)(param_1 + 0xdc) + 0x158) & 0x10000) != 0)) {
    iVar1 = FUN_004277c0(param_1,*(undefined4 *)(param_1 + 0xfc));
    if (iVar1 != 0) {
      FUN_0045d900(s_MINE_SUCCESFULLY_BURNED_OFF_005494d0,1,4,*(undefined4 *)(param_1 + 0xdc),
                   0xffffffff,*(undefined4 *)(param_1 + 100),0xffffffff);
    }
  }
  if (((DAT_005897e4 ^ *(uint *)(param_1 + 0x10c)) & 0xf) == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}

