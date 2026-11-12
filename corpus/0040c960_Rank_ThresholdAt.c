
/* sweep */

undefined4 Rank_ThresholdAt(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (10 < param_2) {
    return *(undefined4 *)(param_1 + 0x24);
  }
  return *(undefined4 *)(param_1 + -4 + param_2 * 4);
}

