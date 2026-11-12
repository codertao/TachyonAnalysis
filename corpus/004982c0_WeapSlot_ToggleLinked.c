
/* sweep */

void WeapSlot_ToggleLinked(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x10) = (uint)(*(int *)(param_1 + 0x10) == 0);
  }
  return;
}

