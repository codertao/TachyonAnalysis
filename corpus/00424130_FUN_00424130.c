
float10 FUN_00424130(int param_1,uint param_2)

{
  if (10 < param_2) {
    param_2 = 10;
  }
  return (float10)*(float *)(&DAT_00532f9c + param_2 * 4) * (float10)*(float *)(param_1 + 0x38);
}

