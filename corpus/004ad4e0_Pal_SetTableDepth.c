
/* refine: 16 or 32-bit lookup tables (0x55e964) */

void Pal_SetTableDepth(int param_1)

{
  if ((param_1 == 0x10) || (param_1 == 0x20)) {
    DAT_0055e964 = param_1;
  }
  return;
}

