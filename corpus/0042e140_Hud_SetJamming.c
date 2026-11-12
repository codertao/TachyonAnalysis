
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Hud_SetJamming(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_005b3304 != DAT_005b0754) {
    DAT_005b0750 = 0;
    DAT_005b0754 = DAT_005b3304;
  }
  if (((byte)DAT_005b2154 & 0x20) == 0) {
    if (DAT_005b0744 <= param_1) {
      DAT_005b0744 = param_1;
    }
    if ((int)DAT_005b0750 < (int)param_2) {
      DAT_005b0750 = param_2 & 0xff;
    }
    uVar1 = global_bad_shift_rng();
    if ((uVar1 & 0xff) < DAT_005b0750) {
      DAT_005b2138 = DAT_005b2138 + 1;
      if (DAT_005b213c < DAT_005b2138) {
        DAT_005b2138 = DAT_005b213c;
      }
      _DAT_005b2140 = 0;
    }
  }
  return;
}

