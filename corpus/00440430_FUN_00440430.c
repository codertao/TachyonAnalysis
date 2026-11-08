
void FUN_00440430(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

