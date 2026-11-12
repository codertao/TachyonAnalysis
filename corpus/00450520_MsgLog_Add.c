
/* sweep */

void MsgLog_Add(char *param_1,undefined4 param_2)

{
  if (param_1 != (char *)0x0) {
    if (DAT_0058f4b4 == DAT_0058f4c4) {
      MsgLog_ShiftLines();
    }
    *(undefined4 *)(DAT_0058f4a0 + DAT_0058f4a4 * 0x84) = param_2;
    _strncpy((char *)(DAT_0058f4a0 + 4 + DAT_0058f4a4 * 0x84),param_1,0x80);
    __strupr(DAT_0058f4a0 + 4 + DAT_0058f4a4 * 0x84);
    MsgLog_AdvanceHead();
    if (DAT_005a6730 != 0) {
      DebugLog_Write(param_1);
    }
  }
  return;
}

