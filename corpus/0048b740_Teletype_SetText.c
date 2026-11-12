
/* sweep */

void Teletype_SetText(int param_1,undefined4 param_2)

{
  Teletype_ResetSlot(param_1);
  *(undefined4 *)(&DAT_0056aba0 + param_1 * 0x170) = param_2;
  return;
}

