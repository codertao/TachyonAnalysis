
void FUN_004ea8ae(void)

{
  uint in_EAX;
  
  if (DAT_00604488 == 0x10) {
    Sw_FillRect16(*(uint *)(&DAT_005a63c0 + (in_EAX & 0xff) * 4));
    return;
  }
  if (DAT_00604488 == 0x20) {
    FUN_004ea9eb();
    return;
  }
  Sw_FillRect8(*(uint *)(&DAT_005a6340 + (in_EAX & 0xff) * 4));
  return;
}

