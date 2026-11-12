
/* sweep */

void Mnu_FreeImageRefs(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

