
void FUN_00490a80(void)

{
  undefined4 uVar1;
  
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    netcomm_Break();
    uVar1 = FUN_0048e800(DAT_005a6140,0xe9,DAT_005a6324._2_1_);
    FUN_0048ce30(uVar1);
    FUN_00491330(5);
  }
  return;
}

