
byte FUN_004c5958(uint param_1)

{
  if (DAT_006c9e80 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

