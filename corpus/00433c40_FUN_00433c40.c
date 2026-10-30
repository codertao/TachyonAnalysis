
void FUN_00433c40(int param_1)

{
  if (*(int *)(param_1 + 200) != 0) {
    FUN_00466290(param_1);
  }
  if ((((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0x1f) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x8c) + 0x1c8) != 0)) {
    FUN_00462d00(param_1,*(int *)(param_1 + 0x8c) + 0x1c8);
  }
  return;
}

