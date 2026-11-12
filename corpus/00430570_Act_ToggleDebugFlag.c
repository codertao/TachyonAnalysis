
/* sweep */

void Act_ToggleDebugFlag(void)

{
  if (DAT_005a6730 != 0) {
    DAT_00562cdc = (uint)(DAT_00562cdc == 0);
  }
  return;
}

