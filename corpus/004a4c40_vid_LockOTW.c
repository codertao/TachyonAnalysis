
/* sweep */

undefined4 vid_LockOTW(void)

{
  int iVar1;
  
  if (9 < DAT_005b9d1c) {
    OutputDebugStringA(s_vid_LockOTW___0055e318);
  }
  if ((DAT_006022f4 == 0) && (DAT_0060234c == 0)) {
    if (DAT_005640e8 == (int *)0x0) {
      if (1 < DAT_005b9d1c) {
        OutputDebugStringA(s_vid_LockOTW___DDraw_not_initted__0055e2f4);
      }
      return 0;
    }
    iVar1 = (**(code **)(*DAT_005640e8 + 100))(DAT_005640e8,0,&DAT_00602780,1,0);
    if ((iVar1 == -0x7789fe3e) && (1 < DAT_005b9d1c)) {
      OutputDebugStringA(s_vid_LockOTW___Surface_lost__0055e2d4);
    }
    return DAT_006027a4;
  }
  return DAT_005640f8;
}

