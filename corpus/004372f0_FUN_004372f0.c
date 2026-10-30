
void FUN_004372f0(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x4c) + -1;
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 == 0) {
    if (DAT_005a6730 != 0) {
      FUN_0045d9d0(s_ALL_ENEMY_ARE_DEAD_0053fbbc,0);
    }
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_18 = 4;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    FUN_0048ddc0(&local_18,param_1);
    return;
  }
  local_18 = 4;
  local_14 = 0;
  local_10 = 1;
  local_c = FUN_0048ec60(iVar1,*(undefined4 *)(param_1 + 0x50));
  local_c = 100 - local_c;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  FUN_0048ddc0(&local_18,param_1);
  return;
}

