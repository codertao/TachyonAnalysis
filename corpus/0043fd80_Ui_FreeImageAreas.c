
/* sweep */

void Ui_FreeImageAreas(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

