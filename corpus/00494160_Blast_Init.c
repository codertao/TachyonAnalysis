
/* scale 2.0, intensity 255, growth def+0x9c, decay 3.0, 7-frame hold (think 0x494130 -> 0x494080)
    */

void Blast_Init(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x20000;
  *(undefined4 *)(param_1 + 0x2c) = 0xff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x92;
  *(undefined1 **)(param_1 + 0x68) = &LAB_00494130;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x9c);
  *(undefined4 *)(param_1 + 0xec) = 0x30000;
  *(undefined4 *)(param_1 + 0xd4) = 7;
  return;
}

