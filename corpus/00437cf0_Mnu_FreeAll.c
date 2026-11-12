
/* sweep */

void Mnu_FreeAll(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  Mnu_FreePolyFonts(param_1);
  MnuImage_FreeAll(param_1);
  Mnu_FreeTexts(param_1);
  Ui_FreeWindowDefs(param_1,*(undefined4 *)(param_1 + 0x40));
  MnuImage_FreeTable(param_1,*(undefined4 *)(param_1 + 0x44));
  Mnu_FreeFonts(param_1,*(undefined4 *)(param_1 + 0x50));
  Mnu_FreeImageRefs(param_1,*(undefined4 *)(param_1 + 0x54));
  Mnu_FreeTextTable(param_1,*(undefined4 *)(param_1 + 0x60));
  Ui_FreeButtons(param_1,*(undefined4 *)(param_1 + 0x4c));
  Ui_FreeLabels(param_1,*(undefined4 *)(param_1 + 0x58));
  Mnu_FreeCursors(param_1,*(undefined4 *)(param_1 + 100));
  Ui_FreeImageAreas(param_1,*(undefined4 *)(param_1 + 0x48));
  Mnu_FreeSoundEvents(param_1,*(undefined4 *)(param_1 + 0x68));
  Ui_FreeTextEntries(param_1,*(undefined4 *)(param_1 + 0x5c));
  ScreenZoom_FreeAll();
  Gfx_HwControl1();
  SndTrig_Free((undefined4 *)(param_1 + 0x78));
  puVar2 = (undefined4 *)(param_1 + 0x78);
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_005a4300 != 0) {
    OurFreeMem(DAT_005a4300);
    DAT_005a4300 = 0;
  }
  return;
}

