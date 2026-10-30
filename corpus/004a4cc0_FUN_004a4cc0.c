
undefined4 __fastcall FUN_004a4cc0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (9 < DAT_005b9d1c) {
    OutputDebugStringA(s_vid_UnlockOTW___0055e328);
  }
  if (DAT_006022f4 == 0) {
    if (DAT_0060234c != 0) {
      return 0;
    }
    uVar1 = (**(code **)(*DAT_005640e8 + 0x80))(DAT_005640e8,DAT_006027a4);
    return uVar1;
  }
  return param_1;
}

