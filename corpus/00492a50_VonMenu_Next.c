
/* sweep */

void VonMenu_Next(void)

{
  int *piVar1;
  
  piVar1 = (int *)((int)DAT_005657ac + 0x24);
  DAT_005657ac = (undefined **)((int)DAT_005657ac + 0x24);
  if (*piVar1 == 0) {
    DAT_005657ac = &PTR_s_VON_OPTIONS_00559ef0;
  }
  Snd_Play2D(1,9,0,0xff);
  return;
}

