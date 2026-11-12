
/* sweep */

void Mnu_FreeSoundEvents(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

