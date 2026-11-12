
/* sweep: guess */

void Teletype_SetRect(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                     uint *param_5)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_0056ace0 + param_1 * 0x170);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_0056ace4 + param_1 * 0x170);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(&DAT_0056acf4 + param_1 * 0x170);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)*(ushort *)(&DAT_0056abb0 + param_1 * 0x170);
  }
  return;
}

