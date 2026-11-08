
void FUN_00415e50(int param_1)

{
  if ((*(int *)(GLBL_SOME_CONTEXT + 0x90) != 0) &&
     (*(int *)(*(int *)(GLBL_SOME_CONTEXT + 0x90) + 0xe8) == param_1)) {
    FUN_004527b0();
    *(undefined4 *)(GLBL_SOME_CONTEXT + 0x90) = 0;
  }
  if ((*(int *)(GLBL_SOME_CONTEXT + 0x110) != 0) &&
     (*(int *)(*(int *)(GLBL_SOME_CONTEXT + 0x110) + 0xe8) == param_1)) {
    *(undefined4 *)(GLBL_SOME_CONTEXT + 0x110) = 0;
  }
  if ((DAT_005b1864 != 0) && (*(int *)(DAT_005b1864 + 0xe8) == param_1)) {
    DAT_005b1864 = 0;
  }
  return;
}

