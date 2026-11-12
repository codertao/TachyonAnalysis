
/* sweep */

void Voice_StopTransmit(void)

{
  undefined4 uVar1;
  
  if ((g_FlightStateFlags & 4) == 0) {
    if ((((GLBL_spacesav[0x26] != 0) && (DAT_00565880 != '\0')) && (DAT_00565881 != '\0')) &&
       (DAT_00565884 != 0)) {
      netcomm_StopAudio();
      uVar1 = Rtxt_GetText(DAT_005a6140,0xe8,DAT_005a6324._2_1_);
      TextBar_Add(uVar1);
    }
    DAT_00565884 = 0;
    return;
  }
  DAT_00565884 = 0;
  return;
}

