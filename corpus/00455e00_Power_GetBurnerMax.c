
/* flags +0x2c bit 2 ? def+0x44 : def+0x40 */

undefined4 Power_GetBurnerMax(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x2c) & 2) != 0) {
    return *(undefined4 *)(param_2 + 0x44);
  }
  return *(undefined4 *)(param_2 + 0x40);
}

