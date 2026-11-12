
/* sweep */

void Teletype_SetColor(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                      undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  param_1 = param_1 * 0x170;
  (&DAT_0056ac02)[param_1] = param_2;
  (&DAT_0056ac01)[param_1] = param_3;
  (&DAT_0056ac00)[param_1] = param_4;
  (&DAT_0056ac05)[param_1] = param_5;
  (&DAT_0056ac04)[param_1] = param_6;
  (&DAT_0056ac03)[param_1] = param_7;
  return;
}

