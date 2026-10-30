
void FUN_004943c0(int param_1,int param_2,undefined4 param_3)

{
  FUN_004186c0(param_1 + 0xe0,param_1 + 0x34,param_3);
  if (*(int *)(param_2 + 0x80) != 0) {
    FUN_00493320(**(undefined4 **)(param_1 + 0xdc),*(undefined4 *)(param_1 + 200),param_1 + 0x34,
                 param_3,0,*(undefined4 *)(param_2 + 0x78),param_2,*(undefined4 *)(param_1 + 0xf0),
                 *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
    if (*(code **)(param_2 + 0x80) != (code *)0x0) {
      (**(code **)(param_2 + 0x80))(param_2);
    }
  }
  if (*(code **)(param_1 + 0x118) != (code *)0x0) {
    (**(code **)(param_1 + 0x118))(param_1);
  }
  FUN_00494370(param_1);
  return;
}

