
void FUN_00430540(void)

{
  if (((DAT_005a6730 != 0) || (DAT_005b2b14 != 0)) &&
     (*(code **)(DAT_005b1dc4 + 0x9c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00430561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 0x9c))();
    return;
  }
  return;
}

