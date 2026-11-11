
/* (fgR, fgG, fgB, bgR, bgG, bgB) anti-alias ramp; callees read these through the bridge's EBP frame
    */

void __cdecl Font_SetColorRamp(int fgR,int fgG,int fgB,int bgR,int bgG,int bgB)

{
  if (DAT_00604488 == 0x10) {
    Font_BuildColorRamp16();
  }
  else {
    Font_BuildColorRampTrue();
  }
  return;
}

