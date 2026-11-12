
/* sweep: guess, list +0xc */

void Quad_PushProjectile(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = param_1;
  return;
}

