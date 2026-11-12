
/* sweep */

uint BasePart_LacksFlag2000(int param_1)

{
  return ~*(uint *)(param_1 + 0x34) >> 0xd & 1;
}

