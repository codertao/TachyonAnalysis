
/* sweep */

void Teletype_SetPos(int param_1,undefined4 param_2,undefined4 param_3)

{
  (&DAT_0056aca4)[param_1 * 0x5c] = param_2;
  (&DAT_0056aca8)[param_1 * 0x5c] = param_3;
  return;
}

