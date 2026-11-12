
/* sweep */

void Ent_SetSound3DVolume(int param_1,undefined4 param_2,undefined4 param_3)

{
  Snd3D_SetVolume(*(undefined4 *)(param_1 + 200),param_2,param_3);
  return;
}

