
/* sweep: guess */

bool SndTrig_MaskAllows(uint param_1)

{
  return (DAT_0055da18 & param_1 & 6) == 0;
}

