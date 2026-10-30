
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ad190(void)

{
  if (DAT_00564ae4 == 0) {
    if (DAT_00604488 == 0x20) {
      FUN_004ad120();
      return;
    }
  }
  else if (*(int *)(DAT_00604504 + 0x1c) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004ad1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_00604540)();
    return;
  }
  return;
}

