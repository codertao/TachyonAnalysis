
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: DOA (no reader) */

void FogSheets_SetDoa(float param_1,int param_2,undefined4 param_3)

{
  param_1 = param_1 * _DAT_0052e768;
  _DAT_0055f1e0 = _DAT_0052e598;
  if ((_DAT_0052e598 <= param_1) && (_DAT_0055f1e0 = param_1, _DAT_0052e54c < param_1)) {
    _DAT_0055f1e0 = _DAT_0052e54c;
  }
  if (param_2 < -0xff) {
    param_2 = -0xff;
  }
  else if (0xff < param_2) {
    param_2 = 0xff;
  }
  _DAT_0055f1e4 = param_2;
  _DAT_0055f1e8 = param_3;
  return;
}

