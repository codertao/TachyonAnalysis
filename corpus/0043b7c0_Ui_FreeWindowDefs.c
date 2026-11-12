
/* sweep */

void Ui_FreeWindowDefs(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    OurFreeMem(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

