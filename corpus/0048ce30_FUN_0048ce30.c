
void FUN_0048ce30(char *param_1,undefined4 param_2)

{
  if (param_1 != (char *)0x0) {
    FUN_00450520(param_1,param_2);
    if (DAT_0056ab74 == DAT_0056ab80) {
      FUN_0048cdf0();
    }
    *(undefined4 *)(DAT_0056ab60 + DAT_0056ab64 * 0x84) = param_2;
    _strncpy((char *)(DAT_0056ab60 + 4 + DAT_0056ab64 * 0x84),param_1,0x80);
    FUN_004c82b6(DAT_0056ab60 + 4 + DAT_0056ab64 * 0x84);
    FUN_0048cda0();
    if (DAT_005a6730 != 0) {
      FUN_004329a0(param_1);
    }
  }
  return;
}

