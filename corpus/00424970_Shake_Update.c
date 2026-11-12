
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Shake_Update(void)

{
  if (DAT_005b1ee8 == 0) {
    DAT_005b1ef8 = 0;
  }
  else {
    DAT_005b1ef8 = DAT_005b1ef8 + 1;
    if (DAT_005b1ef8 < 0x32) {
      _DAT_005b1ed8 = _DAT_005b1ed8 + _DAT_0052e7a4;
    }
  }
  DAT_005b1efc = DAT_005b1efc + -8;
  if (DAT_005b1efc < 0) {
    DAT_005b1efc = 0;
  }
  Shake_DecayScale();
  return;
}

