
/* sweep */

void Quadrant_InitSpawnPool(int param_1)

{
  clr_bytes((Pool *)(param_1 + 0x94),0x28);
  Pool_Init((Pool *)(param_1 + 0x94),0x80,0x24,0x548d5c,0xbbbb);
  return;
}

