
/* sweep */

void PartChain_Insert(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(int *)(param_1 + 0xe0) = param_2;
  return;
}

