
/* sweep */

void Mnu_FreeCursors(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

