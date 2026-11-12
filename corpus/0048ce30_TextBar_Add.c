
/* sweep: 23 callers, flight message line */

void TextBar_Add(char *param_1,undefined4 param_2)

{
  if (param_1 != (char *)0x0) {
    MsgLog_Add(param_1,param_2);
    if (DAT_0056ab74 == DAT_0056ab80) {
      TextBar_ShiftLines();
    }
    *(undefined4 *)(DAT_0056ab60 + DAT_0056ab64 * 0x84) = param_2;
    _strncpy((char *)(DAT_0056ab60 + 4 + DAT_0056ab64 * 0x84),param_1,0x80);
    __strupr(DAT_0056ab60 + 4 + DAT_0056ab64 * 0x84);
    TextBar_AdvanceHead();
    if (DAT_005a6730 != 0) {
      DebugLog_Write(param_1);
    }
  }
  return;
}

