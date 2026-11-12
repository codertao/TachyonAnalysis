
/* sweep */

int DM_GetRelation(int param_1)

{
  return (CONCAT31((int3)((uint)param_1 >> 8),*(short *)(param_1 + 0x76) != 1) - 1U & 0xfffffffe) +
         4;
}

