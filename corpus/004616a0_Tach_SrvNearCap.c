
/* near-record cap: 8, or 2 while conn+0x13c == 2 (startup) */

int Tach_SrvNearCap(int param_1)

{
  return ((*(int *)(param_1 + 0x13c) != 2) - 1 & 0xfffffffa) + 8;
}

