
void FUN_004814a0(void)

{
  int iVar1;
  
  if (DAT_005f9d64 != 0) {
    FUN_00481530();
    FUN_004b55f0(0);
    DAT_005711ec = 500;
    FUN_00481470();
    FUN_00481480();
    iVar1 = netcomm_IsMicSelected();
    if (iVar1 == 0) {
      netcomm_SelectMic(1);
    }
    netcomm_EnableLogging(0);
    netcomm_PlaybackInit(DAT_005f9d64);
    netcomm_StartMeteredRecording(&LAB_00481490);
    FUN_0043ce50(DAT_00571280,s_BtnOptP5VonTest_00556d5c,8);
    FUN_0043f6e0(DAT_00571280,s_IAP5VonIA_00556d3c,s_ImageOptionVonTest2_00556d48);
  }
  return;
}

