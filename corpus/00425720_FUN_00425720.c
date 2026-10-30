
void FUN_00425720(void)

{
  if ((DAT_005b1dc4 != 0) && (*(code **)(DAT_005b1dc4 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 8))();
    return;
  }
  return;
}

