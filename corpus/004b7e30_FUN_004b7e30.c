
void FUN_004b7e30(int param_1)

{
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  if (DAT_006af7b0 != (code *)0x0) {
    (*DAT_006af7b0)(param_1);
  }
  FUN_004b7e10(param_1,param_1 + 0x3c);
  FUN_004b7a40();
  return;
}

