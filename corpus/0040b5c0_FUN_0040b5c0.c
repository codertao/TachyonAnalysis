
void FUN_0040b5c0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    if (*(byte *)(*(int *)(param_1 + 0xd8) + 0x3a) <= param_2) {
      *(undefined2 *)(param_1 + 0xfc) = 1;
      return;
    }
    *(undefined2 *)(param_1 + 0xfc) = 0;
  }
  return;
}

