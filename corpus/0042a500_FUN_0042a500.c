
void FUN_0042a500(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0x4b) {
    if (0x18 < param_1) {
      *param_2 = 0xff;
      param_2[1] = 0xff;
      param_2[2] = 0;
      return;
    }
    if (param_1 != 0) {
      *param_2 = 0xff;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}

