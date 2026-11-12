
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Map_ScrollX(float param_1)

{
  float fVar1;
  
  _DAT_00563650 = _DAT_00563650 + param_1;
  if (_DAT_00563650 < _DAT_0052e598) {
    _DAT_00563650 = 0.0;
  }
  fVar1 = _DAT_0052ec50 - (float)(DAT_00571fd8 - DAT_00571fd0) / _DAT_005524d4;
  if (fVar1 <= _DAT_00563650) {
    _DAT_00563650 = fVar1;
    return;
  }
  return;
}

