
void FUN_00495690(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xd4);
  *piVar1 = *piVar1 + -6;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if ((*(int *)(param_1 + 0xf4) == 0) && (*(int *)(param_1 + 0xd8) == 1)) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xd4);
    FUN_004b2710(param_1 + 0x18,0);
    *(undefined4 *)(param_1 + 0x2c) = DAT_00668f38;
    FUN_00495640(param_1);
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    FUN_0041b8c0(param_1);
  }
  return;
}

