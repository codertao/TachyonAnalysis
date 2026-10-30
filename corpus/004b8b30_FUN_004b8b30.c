
void FUN_004b8b30(undefined4 param_1)

{
  *(undefined4 *)(DAT_006af5dc + DAT_006af5e0 * 4) = param_1;
  DAT_006af5e0 = DAT_006af5e0 + 1;
  if (0x7f < DAT_006af5e0) {
    DAT_006af5e0 = 0;
  }
  return;
}

