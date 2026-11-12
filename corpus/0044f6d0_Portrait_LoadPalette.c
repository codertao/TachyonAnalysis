
/* sweep */

void Portrait_LoadPalette(undefined4 param_1)

{
  DAT_00590d3c = Pal_Load(param_1);
  if (DAT_00590d3c != 0) {
    Pal_Remap(DAT_00590d3c,0x80,0x80,0x80,0x80,0x80);
    Pal_SetLoadRange(DAT_00590d3c + 0x300,DAT_00590d3c + 0x600);
  }
  return;
}

