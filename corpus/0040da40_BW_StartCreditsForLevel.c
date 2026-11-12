
/* sweep */

undefined4 BW_StartCreditsForLevel(int param_1)

{
  if (param_1 < 1) {
    return *(undefined4 *)*DAT_005b97bc;
  }
  if (10 < param_1) {
    param_1 = 10;
  }
  return *(undefined4 *)(*DAT_005b97bc + -4 + param_1 * 4);
}

