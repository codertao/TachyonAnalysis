
/* sweep */

void Orders_InitClientPool(int param_1)

{
  clr_bytes((Pool *)(param_1 + 0x60),0x30);
  Pool_Init((Pool *)(param_1 + 0x60),0x10,0x9c,0x5486b0,0xcccc);
  return;
}

