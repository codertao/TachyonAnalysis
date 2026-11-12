
/* sweep */

void Options_StopVoiceTest(void)

{
  int iVar1;
  
  DAT_005711ec = 0;
  DAT_00571188 = 0;
  DAT_00571180 = 0;
  netcomm_PlaybackShutdown();
  Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0,0);
  set_button_state(DAT_00571280,s_BtnOptP5VonTest_00556d5c,1);
  set_some_glbl_scalar(GLBL_spacesav[0x53]);
  iVar1 = MnuImage_Find(DAT_00571280,s_ImageOptionVonTest1_00556d80);
  if (iVar1 != 0) {
    MnuImage_LoadPcxRemapped(DAT_00571280,iVar1,*(undefined4 *)(iVar1 + 0x1680),0);
  }
  iVar1 = MnuImage_Find(DAT_00571280,s_ImageOptionVonTest2_00556d48);
  if (iVar1 != 0) {
    MnuImage_LoadPcxRemapped(DAT_00571280,iVar1,*(undefined4 *)(iVar1 + 0x1680),0);
  }
  iVar1 = MnuImage_Find(DAT_00571280,s_ImageOptionVonTest3_00556d6c);
  if (iVar1 != 0) {
    MnuImage_LoadPcxRemapped(DAT_00571280,iVar1,*(undefined4 *)(iVar1 + 0x1680),0);
  }
  ImageArea_SetImage(DAT_00571280,s_IAP5VonIA_00556d3c,s_ImageOptionVonTest1_00556d80);
  iVar1 = Ui_FindButton(DAT_00571280,s_BtnOptP5VonTest_00556d5c);
  if (iVar1 != 0) {
    ImageArea_StepFrame(DAT_00571280,s_IAP5VonIA_00556d3c,*(undefined4 *)(iVar1 + 0xd4),
                        *(undefined4 *)(iVar1 + 0xd8));
  }
  return;
}

