
void FUN_004544d0(void)

{
  if (DAT_005b3340 == 0) {
    if (DAT_005b3348 != 0) {
      FUN_004158b0(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
      return;
    }
    if (DAT_005b1864 != 0) {
      FUN_004527e0(DAT_005b1864,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
    }
  }
  else {
    if (DAT_005b3344 == 0) {
      FUN_00454400();
      return;
    }
    if (DAT_005b3344 == 2) {
      FUN_00454460();
      return;
    }
    if (DAT_005b3344 == 3) {
      FUN_00454460();
      return;
    }
  }
  return;
}

