
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Map_SetZoom(float param_1)

{
  if (_DAT_005524d4 != param_1) {
    _DAT_005524d4 = param_1;
    if (param_1 < _DAT_0052e59c) {
      _DAT_005524d4 = 1.0;
      DAT_005717e0 = 0x32;
      return;
    }
    if (_DAT_0052ea74 < param_1) {
      _DAT_005524d4 = 2.0;
    }
    DAT_005717e0 = 0x32;
  }
  return;
}

