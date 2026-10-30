
void FUN_00495910(int param_1)

{
  if (0 < *(int *)(param_1 + 0xbc)) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(param_1);
    }
    FUN_0045e530(param_1 + 0x34,1,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
    FUN_00494370(param_1);
  }
  return;
}

