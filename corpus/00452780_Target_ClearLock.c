
/* sweep: guess */

void Target_ClearLock(void)

{
  if (DAT_005b1f00 != 0) {
    DAT_005b1f00 = 0;
    return;
  }
  if (*(int *)(GLBL_SOME_CONTEXT + 0x90) != 0) {
    DAT_005b1f00 = 1;
  }
  return;
}

