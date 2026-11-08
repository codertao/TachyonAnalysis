
void FUN_004b19a0(int param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x1c) - DAT_00666ab0;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x20) - DAT_00666ab4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x24) - DAT_00666ab8;
  call_copy_mathresult_to_global(&DAT_00666ac8);
  FUN_004b2410(param_1 + 0x28,param_1 + 0x28);
  return;
}

