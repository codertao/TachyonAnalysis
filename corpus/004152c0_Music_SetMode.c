
/* sweep */

void Music_SetMode(int param_1)

{
  if (param_1 != 0) {
    Snd3D_StopAll();
  }
  DAT_005b8f4c = param_1;
  return;
}

