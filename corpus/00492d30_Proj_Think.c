
/* sweep: guess */

void Proj_Think(int param_1)

{
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  Ent_Draw(param_1 + 0x18);
  return;
}

