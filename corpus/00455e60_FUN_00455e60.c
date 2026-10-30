
int FUN_00455e60(undefined4 param_1,int param_2,uint param_3)

{
  if (10 < param_3) {
    param_3 = 10;
  }
  return *(int *)(&DAT_00532ff4 + param_3 * 4) * *(int *)(param_2 + 0x20) >> 8;
}

