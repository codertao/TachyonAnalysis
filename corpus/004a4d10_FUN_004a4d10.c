
undefined4 FUN_004a4d10(void)

{
  int iVar1;
  
  if (9 < DAT_005b9d1c) {
    OutputDebugStringA(s_vid_LockPrimary___0055e35c);
  }
  if (DAT_006022f4 == 0) {
    FUN_004a4de0();
    iVar1 = (**(code **)(*DAT_005640e4 + 100))(DAT_005640e4,0,&DAT_00602780,1,0);
    if (iVar1 == -0x7789fe3e) {
      if (1 < DAT_005b9d1c) {
        OutputDebugStringA(s_vid_LockPrimary___Surface_lost__0055e33c);
      }
      FUN_004a44c0(DAT_006022e0,DAT_006022e4,DAT_006022e8,DAT_006022ec);
    }
    DAT_0060231c = DAT_00602790;
    return DAT_006027a4;
  }
  return DAT_005640f8;
}

