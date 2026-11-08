
void FUN_00454e90(void)

{
  if (GLBL_SOME_CONTEXT != 0) {
    FUN_00465ff0(*(undefined4 *)(GLBL_SOME_CONTEXT + 200));
    FUN_00465ff0(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x104));
    FUN_0041b950(GLBL_SOME_CONTEXT);
    FUN_0041b9b0(GLBL_SOME_CONTEXT);
    GLBL_SOME_CONTEXT = 0;
  }
  return;
}

