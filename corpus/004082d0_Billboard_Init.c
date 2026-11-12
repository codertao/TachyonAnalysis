
/* sweep */

void Billboard_Init(int param_1)

{
  if (param_1 != 0) {
    clr_bytes(param_1,0x40);
    Billboard_AddFlags(param_1,1);
  }
  return;
}

