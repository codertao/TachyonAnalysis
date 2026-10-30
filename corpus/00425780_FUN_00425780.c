
void FUN_00425780(void)

{
  if ((DAT_005b1dc4 != 0) && (*(code **)(DAT_005b1dc4 + 0x10) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_005b1dc4 + 0x10))();
    return;
  }
  return;
}

