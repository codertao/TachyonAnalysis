
/* sweep */

void Ent_SetSound3DPitch(int param_1,undefined4 param_2)

{
  Snd3D_SetPitch(*(undefined4 *)(param_1 + 200),param_2);
  return;
}

