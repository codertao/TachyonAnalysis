
/* flags +0x2c bit 1 (laser upgrade) ? def+4 : def+0 */

undefined4 Power_GetLaserMax(int param_1,undefined4 *param_2)

{
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    return param_2[1];
  }
  return *param_2;
}

