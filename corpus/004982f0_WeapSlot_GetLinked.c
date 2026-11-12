
/* sweep */

undefined4 WeapSlot_GetLinked(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x10);
}

