
/* refine: guess: driver control(0x50), used by fog sheets */

void Gfx_HwControl50(void)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_0060451c)(0x50);
  }
  return;
}

