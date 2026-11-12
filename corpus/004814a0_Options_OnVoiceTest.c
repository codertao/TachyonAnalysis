
/* sweep: BtnOptP5VonTest */

void Options_OnVoiceTest(void)

{
  int iVar1;
  
  if (DAT_005f9d64 != 0) {
    Options_StopVoiceTest();
    set_some_glbl_scalar(0);
    DAT_005711ec = 500;
    Voice_ApplyPlaybackVolume();
    Voice_ApplyMicGain();
    iVar1 = netcomm_IsMicSelected();
    if (iVar1 == 0) {
      netcomm_SelectMic(1);
    }
    netcomm_EnableLogging(0);
    netcomm_PlaybackInit(DAT_005f9d64);
    netcomm_StartMeteredRecording(&LAB_00481490);
    set_button_state(DAT_00571280,s_BtnOptP5VonTest_00556d5c,8);
    ImageArea_SetImage(DAT_00571280,s_IAP5VonIA_00556d3c,s_ImageOptionVonTest2_00556d48);
  }
  return;
}

