
/* sweep */

void Flight_LoadAssets(void)

{
  FxTable_Clear();
  Rtxt_LoadGameText();
  Flight_LoadCommonAssets();
  Dialog_ClearActive();
  Sound_LoadSpacePwf();
  return;
}

