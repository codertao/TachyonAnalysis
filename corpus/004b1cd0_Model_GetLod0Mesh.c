
/* model -> current/first part mesh record [l] */

undefined4 Model_GetLod0Mesh(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x90) + 4);
}

