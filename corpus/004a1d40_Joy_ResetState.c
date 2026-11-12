
/* sweep */

void Joy_ResetState(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x8000;
    *(undefined4 *)(param_1 + 0x40) = 0x8000;
    *(undefined4 *)(param_1 + 0x44) = 0xffff;
    *(undefined4 *)(param_1 + 0x48) = 0x8000;
    *(undefined4 *)(param_1 + 0x4c) = 0xffff;
    *(undefined4 *)(param_1 + 0x50) = 0xffff;
    *(undefined4 *)(param_1 + 0x54) = 0xffff;
    *(undefined4 *)(param_1 + 0x58) = 0xffff;
  }
  return;
}

