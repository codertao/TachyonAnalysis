
void FUN_00490a10(void)

{
  undefined4 uVar1;
  
  if ((g_FlightStateFlags & 4) == 0) {
    if ((((DAT_005b2c58 != 0) && (DAT_00565880 != '\0')) && (DAT_00565881 != '\0')) &&
       (DAT_00565884 != 0)) {
      netcomm_StopAudio();
      uVar1 = FUN_0048e800(DAT_005a6140,0xe8,DAT_005a6324._2_1_);
      FUN_0048ce30(uVar1);
    }
    DAT_00565884 = 0;
    return;
  }
  DAT_00565884 = 0;
  return;
}

