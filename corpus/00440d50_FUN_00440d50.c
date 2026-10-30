
void FUN_00440d50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x58);
    FUN_004addf0(*(int *)(param_1 + 0x3c) + 0x20);
    FUN_0049c530(*(undefined4 *)(param_1 + 0x3c));
    *(int *)(param_1 + 0x3c) = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

