
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047bb00(float param_1)

{
  float fVar1;
  
  _DAT_00563654 = _DAT_00563654 + param_1;
  if (_DAT_00563654 < _DAT_0052e598) {
    _DAT_00563654 = 0.0;
  }
  fVar1 = _DAT_0052ec54 - (float)(DAT_00571fdc - DAT_00571fd4) / _DAT_005524d4;
  if (fVar1 <= _DAT_00563654) {
    _DAT_00563654 = fVar1;
    return;
  }
  return;
}

