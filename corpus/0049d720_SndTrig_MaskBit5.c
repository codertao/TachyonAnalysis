
/* sweep: guess */

uint SndTrig_MaskBit5(uint param_1)

{
  return (DAT_0055da18 & 0xff ^ param_1 & 0xff) >> 5 & 1;
}

