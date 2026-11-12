
/* sweep */

undefined4 __fastcall vid_UnlockPrimary(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (9 < DAT_005b9d1c) {
    OutputDebugStringA(s_vid_UnlockPrimary___0055e370);
  }
  if (DAT_006022f4 == 0) {
    uVar1 = (**(code **)(*DAT_005640e4 + 0x80))(DAT_005640e4,DAT_006027a4);
    return uVar1;
  }
  return param_1;
}

