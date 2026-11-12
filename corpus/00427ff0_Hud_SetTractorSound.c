
/* sweep */

void Hud_SetTractorSound(int param_1,int param_2)

{
  if ((param_1 != DAT_005b1b48) && (param_1 != 0)) {
    Snd3D_SetVolume(DAT_005b1b30,param_1,0xff);
    DAT_005b1b48 = param_1;
  }
  if (param_2 != 0) {
    Snd3D_SetVar50(DAT_005b1b30,0);
    return;
  }
  Snd3D_SetVar50(DAT_005b1b30,1);
  return;
}

