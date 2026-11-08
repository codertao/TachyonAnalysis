
void set_some_glbl_scalar(int param_1)

{
  if (param_1 < 0) {
    GLBL_some_scalar_from_spacesav_in_fixed = 0;
    return;
  }
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  GLBL_some_scalar_from_spacesav_in_fixed = param_1 << 0x10;
  return;
}

