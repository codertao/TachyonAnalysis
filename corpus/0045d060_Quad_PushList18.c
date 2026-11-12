
/* sweep */

void Quad_PushList18(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x18);
  *(int *)(param_2 + 0x18) = param_1;
  return;
}

