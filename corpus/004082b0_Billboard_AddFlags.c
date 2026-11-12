
/* sweep */

void Billboard_AddFlags(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | param_2;
  }
  return;
}

