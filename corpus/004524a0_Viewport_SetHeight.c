
/* sweep: guess */

void Viewport_SetHeight(int param_1)

{
  if (0xf1 < param_1) {
    param_1 = 0xf1;
  }
  Viewport_SetAndClear(0,param_1,0x27f,0x1df - param_1);
  return;
}

