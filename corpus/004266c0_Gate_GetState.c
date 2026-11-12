
/* sweep */

undefined4 Gate_GetState(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xe8);
}

