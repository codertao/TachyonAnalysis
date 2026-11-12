
/* sweep */

uint CapPart_PickCollideFn(uint param_1)

{
  return ~-(uint)((param_1 & 0x20) != 0) & 0x4121d0;
}

