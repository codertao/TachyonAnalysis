
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Map_ClampScroll(float param_1,float param_2)

{
  float10 fVar1;
  
  if (_DAT_005524d8 == _DAT_0052ea74) {
    DAT_005717e0 = 0x32;
    DAT_00571fc0 = (param_1 - _DAT_0052ec5c / _DAT_005524d8) * _DAT_0052e6d0;
    DAT_00571fc4 = (param_2 - _DAT_0052ec58 / _DAT_005524d8) * _DAT_0052e6d0;
    return;
  }
  fVar1 = (float10)Map_GetScrollX();
  DAT_00571fc0 = (float)-(fVar1 * (float10)_DAT_0052e6d0);
  fVar1 = (float10)Map_GetScrollY();
  DAT_005717e0 = 0x32;
  DAT_00571fc4 = (float)-(fVar1 * (float10)_DAT_0052e6d0);
  return;
}

