
/* (rt, idx) -> &record[idx] (16 B; +0 value char*), 0 if out of range */

int Rtxt_GetRecord(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) <= param_2) {
    return 0;
  }
  return (param_2 + 1) * 0x10 + param_1;
}

