
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Mss_Startup(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  iVar3 = *param_2;
  uVar1 = param_2[1];
  if (param_2[2] != 0) {
    iVar4 = 2;
  }
  _AIL_set_preference_8(0x1b,DAT_0060398c != 0);
  _AIL_set_preference_8(1,param_2[3]);
  uVar2 = uVar1 >> 3;
  _DAT_00601e68 = uVar2 * iVar4 * iVar3;
  _DAT_00601e60 = CONCAT22((short)iVar4,1);
  _DAT_00601e6c = CONCAT22((short)uVar1,(short)uVar2 * (short)iVar4);
  DAT_005f9d64 = 0;
  _DAT_00601e64 = iVar3;
  _AIL_startup_0();
  if (param_1 == 0) {
    iVar3 = Mss_OpenWaveOut();
    if (iVar3 == 0) {
      _AIL_get_DirectSound_info_12(0,&DAT_005f9d64,0);
      DAT_00563e9c = 1;
      goto LAB_004a7772;
    }
LAB_004a7761:
    iVar3 = Mss_OpenWaveOutDS();
    DAT_00563e9c = 0;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) {
        return;
      }
      goto LAB_004a7761;
    }
    iVar3 = Mss_OpenWaveOut();
    _AIL_get_DirectSound_info_12(0,&DAT_005f9d64,0);
    DAT_00563e9c = 1;
  }
  if (iVar3 != 0) {
    return;
  }
LAB_004a7772:
  GLBL_audio_running = 1;
  Mss_AllocChannels(param_2[3]);
  return;
}

