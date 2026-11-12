
/* sweep */

void Act_DebugFade(void)

{
  undefined4 uVar1;
  
  if (DAT_005a6730 != 0) {
    if (DAT_00562bac == 0) {
      uVar1 = 0x3c;
    }
    else {
      uVar1 = 0;
    }
    Fade_StartDefault(uVar1,0);
    DAT_00562bac = (uint)(DAT_00562bac == 0);
  }
  return;
}

