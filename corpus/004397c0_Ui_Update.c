
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* per-frame UI update/draw (called by TitleMenu_Update) [tentative] */

void Ui_Update(undefined4 param_1)

{
  FUN_00414dc0(&DAT_005a6160);
  FUN_0043c740(param_1);
  FUN_00440300(param_1);
  FUN_0043fac0(param_1,1);
  FUN_00437a80();
  FUN_0043ef40();
  FUN_00440d20();
  if (DAT_005a4b38 != (code *)0x0) {
    (*DAT_005a4b38)(param_1);
  }
  _DAT_005a4b3c = _DAT_005a4b3c + 1;
  return;
}

