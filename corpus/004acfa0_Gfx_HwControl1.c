
/* refine: guess: driver control(1) after palette/lighting changes (texture reload?) */

void Gfx_HwControl1(void)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_0060451c)(1);
  }
  return;
}

