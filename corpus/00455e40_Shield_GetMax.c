
/* +0x2c bit 4 ? def+0xc : def+8 */

undefined4 Shield_GetMax(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x2c) & 4) != 0) {
    return *(undefined4 *)(param_2 + 0xc);
  }
  return *(undefined4 *)(param_2 + 8);
}

