
/* refine: driver slot 0x604538 = Hw_d3d texture uncache ("Attempted Uncache during FB Lock") */

void Gfx_ReleaseTexture(int param_1)

{
  if ((DAT_00564ae4 != 0) && (param_1 != 0)) {
    (*DAT_00604538)(param_1);
  }
  return;
}

