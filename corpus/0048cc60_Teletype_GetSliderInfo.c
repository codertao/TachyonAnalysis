
/* sweep */

void Teletype_GetSliderInfo(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_0056acf8 + param_1 * 0x170);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_0056ace8 + param_1 * 0x170);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(&DAT_0056acec + param_1 * 0x170);
  }
  return;
}

