
/* refine: guess: 0x60f874 + driver state 8; halves fog colour, doubles image intensity (modulate
   2x?) */

void Gfx_SetBrightMode(undefined4 param_1)

{
  DAT_0060f874 = param_1;
  if (DAT_00564ae4 != 0) {
    (*DAT_00604578)(8,param_1);
  }
  return;
}

