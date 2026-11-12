
/* sweep: guess */

void Teletype_SetInstant(int param_1,int param_2)

{
  Teletype_SetDone(param_1,param_2 == 0);
  (&DAT_0056ac3c)[param_1 * 0x5c] = param_2;
  if (param_2 != 0) {
    (&DAT_0056ac38)[param_1 * 0x5c] = *(undefined4 *)(&DAT_0056ac34 + param_1 * 0x170);
  }
  return;
}

