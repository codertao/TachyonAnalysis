
/* refine: asm: fill clip rect with colour index, per bpp (8/16/32) */

void Sw_FillRectColorIdx(void)

{
  uint in_EAX;
  
  if (DAT_00604488 == 0x10) {
    Sw_FillRect16(*(uint *)(&DAT_005a63c0 + (in_EAX & 0xff) * 4));
    return;
  }
  if (DAT_00604488 == 0x20) {
    SwAsm_FillRect32();
    return;
  }
  Sw_FillRect8(*(uint *)(&DAT_005a6340 + (in_EAX & 0xff) * 4));
  return;
}

