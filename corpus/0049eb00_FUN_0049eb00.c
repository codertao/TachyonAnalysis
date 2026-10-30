
void FUN_0049eb00(uint param_1,uint param_2)

{
  if ((param_2 & 0x1000000) == 0) {
    (&DAT_00603a20)[param_1 & 0xff] = 0;
  }
  else {
    (&DAT_00603b20)[param_1 & 0xff] = 0;
    if (param_1 == 0x11) {
      DAT_00603a31 = 0;
      return;
    }
  }
  return;
}

