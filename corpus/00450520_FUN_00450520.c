
void FUN_00450520(char *param_1,undefined4 param_2)

{
  if (param_1 != (char *)0x0) {
    if (DAT_0058f4b4 == DAT_0058f4c4) {
      FUN_004504e0();
    }
    *(undefined4 *)(DAT_0058f4a0 + DAT_0058f4a4 * 0x84) = param_2;
    _strncpy((char *)(DAT_0058f4a0 + 4 + DAT_0058f4a4 * 0x84),param_1,0x80);
    FUN_004c82b6(DAT_0058f4a0 + 4 + DAT_0058f4a4 * 0x84);
    FUN_004504a0();
    if (DAT_005a6730 != 0) {
      FUN_004329a0(param_1);
    }
  }
  return;
}

