
/* sweep */

void Ui_FreeButtons(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

