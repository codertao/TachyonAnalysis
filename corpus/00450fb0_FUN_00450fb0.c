
void FUN_00450fb0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x90) == 2) {
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    FUN_00450e60(4,param_1 + 0x20,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00450e60(4,param_1 + 0x20,param_2);
    return;
  }
  FUN_00450e60(4,&DAT_005486d0,param_2);
  return;
}

