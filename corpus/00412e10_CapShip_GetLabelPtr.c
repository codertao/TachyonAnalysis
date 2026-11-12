
/* sweep */

int CapShip_GetLabelPtr(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    return param_1 + 0xec;
  }
  return *(int *)(param_1 + 0xdc) + 0xec;
}

