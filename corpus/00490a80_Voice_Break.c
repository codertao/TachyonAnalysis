
/* sweep */

void Voice_Break(void)

{
  undefined4 uVar1;
  
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    netcomm_Break();
    uVar1 = Rtxt_GetText(DAT_005a6140,0xe9,DAT_005a6324._2_1_);
    TextBar_Add(uVar1);
    Voice_Notify(5);
  }
  return;
}

