
void FUN_004257a0(void)

{
  if ((DAT_005b1dc4 != 0) && (*(code **)(DAT_005b1dc4 + 0x14) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004257b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 0x14))();
    return;
  }
  return;
}

