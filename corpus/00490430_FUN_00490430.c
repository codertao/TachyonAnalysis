
void FUN_00490430(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((((g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    puVar3 = &DAT_00565a80;
    for (iVar2 = 0x1400; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    iVar2 = 0;
    piVar1 = &DAT_00565a80;
    do {
      *piVar1 = iVar2;
      piVar1 = piVar1 + 0x20;
      iVar2 = iVar2 + 1;
    } while ((int)piVar1 < 0x569a80);
    DAT_00565a34._3_1_ = DAT_006af656;
    DAT_0056589c = 0xffffffff;
    DAT_00565884 = 0;
    DAT_00563e5c = 0;
    DAT_0056588c = DAT_006af650;
    DAT_00565888 = DAT_006af654;
    DAT_00565890 = DAT_006af608;
    if (DAT_006af650 == 0) {
      if ((((g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) &&
         ((DAT_00565880 != '\0' && (DAT_00565881 != '\0')))) {
        FUN_00490a10();
        FUN_00490a80();
        FUN_004905e0(0xffffffff);
      }
      DAT_00565881 = 0;
      return;
    }
    netcomm_PlaybackInitEx();
    netcomm_RegisterServer(DAT_0056588c,DAT_00565888);
    netcomm_RegisterClient(DAT_00565890);
    netcomm_SetMaxDataPackets(DAT_005658b0);
    netcomm_SetMaxAudioPackets(DAT_005658ac);
    if (DAT_00565a3c != '\0') {
      netcomm_RegisterVuCallback(&LAB_00491050);
    }
    netcomm_RegisterMessageCallback(&LAB_00490bf0);
    FUN_00490780(DAT_00565890);
    netcomm_SetAudioGain(DAT_005b2cc8);
    netcomm_EnablePlaybackFiltering(DAT_00565a64 & 0xff);
    netcomm_EnableNotification(DAT_00565a68);
    netcomm_SetMaxBusyNotifications(DAT_00565a68);
    netcomm_SetMaxMuteNotifications(DAT_00565a68);
  }
  return;
}

