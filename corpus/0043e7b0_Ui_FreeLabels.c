
/* sweep */

void Ui_FreeLabels(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

