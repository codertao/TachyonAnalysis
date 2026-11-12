
/* sweep */

void Joy_ClearButtonFlag(uint param_1)

{
  if ((param_1 & DAT_005640c0) != 0) {
    DAT_005640c0 = DAT_005640c0 & ~param_1;
  }
  return;
}

