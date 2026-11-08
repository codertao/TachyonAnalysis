
void FUN_00450120(void)

{
  FUN_0044f3e0(0);
  FUN_004545f0(GLBL_SOME_CONTEXT);
  if (*(code **)(DAT_00590238 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00450142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00590238 + 0x28))();
    return;
  }
  return;
}

