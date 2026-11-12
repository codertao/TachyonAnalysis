
/* sweep */

void Quad_PushList14(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x14);
  *(int *)(param_2 + 0x14) = param_1;
  return;
}

