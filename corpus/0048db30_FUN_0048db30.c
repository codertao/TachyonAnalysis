
void FUN_0048db30(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 >> 0x10 == DAT_0056aab8) && ((int)(param_1 & 0xffff) < DAT_0056aab0)) {
    *(undefined4 *)(DAT_0056aab4 + (param_1 & 0xffff) * 8) = param_3;
  }
  return;
}

