
/* fill with colour 0x5a62e8 via Sw_FillRect8/16 */

void __cdecl Sw_FillViewport(void)

{
  if (DAT_00604488 == 0x10) {
    Sw_FillRect16(DAT_005a62e8);
  }
  else {
    Sw_FillRect8(DAT_005a62e8);
  }
  return;
}

