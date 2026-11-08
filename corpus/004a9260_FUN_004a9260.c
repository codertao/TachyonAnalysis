
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9260(void)

{
  DWORD DVar1;
  MMRESULT MVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  WAVEFORMATEX local_14;
  
  local_14.wFormatTag = 1;
  local_14.nChannels = 2;
  local_14.nSamplesPerSec = 0x5622;
  local_14.nAvgBytesPerSec = 0x15888;
  local_14.nBlockAlign = 4;
  local_14.wBitsPerSample = 0x10;
  local_14.cbSize = 0;
  DAT_005f9e00 = (HWAVEOUT)0x0;
  DVar1 = timeGetTime();
  do {
    MVar2 = waveOutOpen(&DAT_005f9e00,0xffffffff,&local_14,(DWORD_PTR)GLBL_WindowHandle_,1,0x10000);
    DVar3 = timeGetTime();
    if (MVar2 == 0) goto LAB_004a92f9;
  } while ((int)(DVar3 - DVar1) < 3000);
  if (MVar2 != 0) {
    waveOutClose(DAT_005f9e00);
    GLBL_audio_running = 0;
    return;
  }
LAB_004a92f9:
  waveOutReset(DAT_005f9e00);
  DAT_005f9d54 = 0x15888;
  DAT_005f9d80 = 0x5622;
  DAT_005f9e04 = (undefined4 *)FUN_0049c7d0(0x15888,s_Audio_buffer_1_0055e7dc);
  uVar5 = DAT_005f9d54;
  puVar7 = DAT_005f9e04;
  for (uVar4 = DAT_005f9d54 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DAT_005f9e08 = (undefined4 *)FUN_0049c7d0(DAT_005f9d54,s_Audio_buffer_2_0055e7cc);
  uVar5 = DAT_005f9d54;
  puVar7 = DAT_005f9e08;
  for (uVar4 = DAT_005f9d54 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DAT_005f9e0c = (undefined4 *)FUN_0049c7d0(DAT_005f9d54,s_Audio_buffer_3_0055e7bc);
  uVar5 = DAT_005f9d54;
  puVar7 = DAT_005f9e0c;
  for (uVar4 = DAT_005f9d54 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; DAT_005f9de4 = DAT_005f9d54, uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar7 = &DAT_005f9da0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  DAT_005f9da0 = DAT_005f9e04;
  DAT_005f9da4 = DAT_005f9de4;
  _DAT_005f9da8 = 0;
  _DAT_005f9dac = 1;
  _DAT_005f9db0 = 0;
  _DAT_005f9db4 = 0;
  puVar7 = &DAT_005f9dc0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  DAT_005f9dc0 = DAT_005f9e08;
  DAT_005f9dc4 = DAT_005f9de4;
  _DAT_005f9dc8 = 0;
  _DAT_005f9dcc = 2;
  _DAT_005f9dd0 = 0;
  _DAT_005f9dd4 = 0;
  puVar7 = &DAT_005f9de0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  DAT_005f9de0 = DAT_005f9e0c;
  _DAT_005f9de8 = 0;
  _DAT_005f9dec = 3;
  _DAT_005f9df0 = 0;
  _DAT_005f9df4 = 0;
  MVar2 = waveOutPrepareHeader(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9da0,0x20);
  if (MVar2 != 0) {
    MessageBoxA(GLBL_WindowHandle_,s_Could_not_prep_audio_0055e798,s_Audio_Error_0055e7b0,0);
    waveOutClose(DAT_005f9e00);
    GLBL_audio_running = 0;
    FUN_0049f770();
  }
  waveOutPrepareHeader(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9dc0,0x20);
  waveOutPrepareHeader(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9de0,0x20);
  FUN_004a9220(1);
  _DAT_005f9e14 = 0;
  DAT_005f9d5c = 0;
  FUN_004cb4c3();
  FUN_004cb481(1);
  DAT_005f9e10 = 1;
  MVar2 = waveOutWrite(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9da0,0x20);
  if (MVar2 != 0) {
    MessageBoxA(GLBL_WindowHandle_,s_Could_not_play_audio_0055e780,s_Audio_Error_0055e7b0,0);
    waveOutClose(DAT_005f9e00);
    GLBL_audio_running = 0;
    FUN_0049f770();
  }
  waveOutWrite(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9dc0,0x20);
  waveOutWrite(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9de0,0x20);
  return;
}

