
/* refine: guess: tick & 0xffff and tick*(1/rate) for material/state animation */

void Rend_SetAnimClock(uint param_1)

{
  DAT_00668fd8 = param_1 & 0xffff;
  DAT_00668fdc = DAT_00668fd4 * param_1;
  return;
}

