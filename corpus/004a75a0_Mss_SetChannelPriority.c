
/* sweep: guess */

void Mss_SetChannelPriority(uint param_1,uint param_2)

{
  if (param_1 < DAT_00601e74) {
    *(uint *)(param_1 * 0x10 + 4 + DAT_00601e78) = param_2 & 0xff;
  }
  return;
}

