
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8f80(uint param_1)

{
  _DAT_006af610 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> _DAT_006af610 == 0; _DAT_006af610 = _DAT_006af610 + -1) {
    }
  }
  _DAT_006af614 = param_1 - 1;
  DAT_006af60c = param_1;
  DAT_006af640 = DAT_006af640 + (param_1 >> 1);
  return;
}

