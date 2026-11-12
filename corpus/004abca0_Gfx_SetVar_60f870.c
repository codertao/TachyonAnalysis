
/* sweep: guess */

void Gfx_SetVar_60f870(int param_1)

{
  DAT_0060f870 = param_1;
  if (param_1 == 0) {
    DAT_0060f870 = 0x100;
  }
  return;
}

