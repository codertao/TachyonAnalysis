
void FUN_00425740(void)

{
  if ((DAT_005b1dc4 != 0) && (*(code **)(DAT_005b1dc4 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 0xc))();
    return;
  }
  return;
}

