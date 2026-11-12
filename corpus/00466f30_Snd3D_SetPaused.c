
/* sweep */

void Snd3D_SetPaused(int param_1)

{
  DAT_005897ac = param_1;
  if (param_1 != 0) {
    Snd3D_StopAll();
  }
  Mss3D_PauseResumeAll(param_1,&DAT_00589788);
  return;
}

