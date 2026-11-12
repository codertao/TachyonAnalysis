
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: guess: n and 0x10000/n (init 50 = 50 Hz) */

void Rend_SetTickRate(int param_1)

{
  _DAT_00668fd0 = param_1;
  DAT_00668fd4 = (int)(0x10000 / (longlong)param_1);
  return;
}

