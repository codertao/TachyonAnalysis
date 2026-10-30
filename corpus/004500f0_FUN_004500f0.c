
void FUN_004500f0(void)

{
  FUN_00455650();
  FUN_0044f260(0,0);
  FUN_0044f3e0(2);
  if (*(code **)(DAT_00590238 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00450114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00590238 + 0x24))();
    return;
  }
  return;
}

