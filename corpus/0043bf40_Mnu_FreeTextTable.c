
/* sweep */

void Mnu_FreeTextTable(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

