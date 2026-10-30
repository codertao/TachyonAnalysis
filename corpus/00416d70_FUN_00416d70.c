
void FUN_00416d70(void)

{
  DAT_005b9054 = 0;
  DAT_005b905c = 0;
  if (*(code **)(DAT_005b1dc4 + 0x4c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 0x4c))();
    return;
  }
  return;
}

