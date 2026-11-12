
/* sweep */

void Input_OnKeyDown(uint param_1,uint param_2)

{
  if ((param_2 & 0x1000000) == 0) {
    (&DAT_00603a20)[param_1 & 0xff] = 1;
  }
  else {
    (&DAT_00603b20)[param_1 & 0xff] = 1;
    if (param_1 == 0x11) {
      DAT_00603a31 = 1;
      Input_PushKey(0x11,param_2);
      return;
    }
  }
  Input_PushKey(param_1,param_2);
  return;
}

