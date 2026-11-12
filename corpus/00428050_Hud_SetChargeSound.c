
/* sweep */

void Hud_SetChargeSound(int param_1)

{
  if (param_1 != 0) {
    Snd3D_SetVolume(DAT_005b1b50,DAT_005b1b4c,0xff);
    Snd3D_SetVar50(DAT_005b1b50,0);
    return;
  }
  Snd3D_SetVar50(DAT_005b1b50,1);
  return;
}

