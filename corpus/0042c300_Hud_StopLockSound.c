
/* sweep */

void Hud_StopLockSound(void)

{
  if (DAT_005b1b44 != 0) {
    Snd3D_SetVar50(DAT_005b1b2c,1);
    DAT_005b1b44 = 0;
  }
  return;
}

