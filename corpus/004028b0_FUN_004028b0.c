
void FUN_004028b0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x32c) == 0) || (*(undefined1 **)(param_1 + 0x304) != &LAB_004027e0)) {
    *(undefined4 *)(param_1 + 0x32c) = param_2;
    *(undefined4 *)(param_1 + 0x330) = param_2;
    *(undefined1 **)(param_1 + 0x304) = &LAB_004027e0;
    FUN_00401ff0(param_1);
  }
  return;
}

