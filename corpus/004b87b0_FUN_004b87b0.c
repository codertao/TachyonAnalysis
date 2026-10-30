
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b87b0(uint param_1)

{
  _DAT_006af6ac = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> _DAT_006af6ac == 0; _DAT_006af6ac = _DAT_006af6ac + -1) {
    }
  }
  DAT_006af6a8 = param_1;
  DAT_006af6b0 = param_1 - 1;
  return;
}

