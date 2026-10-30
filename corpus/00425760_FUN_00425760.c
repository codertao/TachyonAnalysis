
void FUN_00425760(void)

{
  if ((DAT_005b1dc4 != (undefined4 *)0x0) && ((code *)*DAT_005b1dc4 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042576f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_005b1dc4)();
    return;
  }
  return;
}

