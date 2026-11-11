
/* rankSpeed[rank] x des+0x38 (MAX_SPEED raw) */

float10 Flight_CruiseTopSpeed(int param_1,uint param_2)

{
  if (10 < param_2) {
    param_2 = 10;
  }
  return (float10)*(float *)(&g_RankSpeedScale + param_2 * 4) * (float10)*(float *)(param_1 + 0x38);
}

