
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9b70(float *param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float *pfVar4;
  longlong local_10;
  longlong local_8;
  
  pfVar4 = param_1;
  _DAT_006c9b28 = (double)(*param_1 * _DAT_0052e7a0 + (float)_DAT_006c9b28);
  _DAT_006c90a0 = (double)((float)_DAT_006c90a0 - param_1[1] * _DAT_0052e7a0);
  local_10 = (longlong)ROUND(param_1[2] * _DAT_0052e544);
  FUN_004bc0a0((int)(float)local_10 << 7,&param_1,&local_10);
  dVar1 = (double)(float)param_1 * _DAT_006c90a8;
  _DAT_006c90a8 = (double)(float)param_1 * _DAT_006c9b30 + (double)(float)local_10 * _DAT_006c90a8;
  dVar2 = (double)(float)param_1 * _DAT_006c90a0;
  _DAT_006c90a0 = (double)(float)param_1 * _DAT_006c9b28 + (double)(float)local_10 * _DAT_006c90a0;
  local_8 = (longlong)ROUND(pfVar4[2] * _DAT_0052ef50);
  DAT_006c9038 = DAT_006c9038 + (int)local_8;
  _DAT_006c9b28 = (double)(float)local_10 * _DAT_006c9b28 - dVar2;
  _DAT_006c9b30 = (double)(float)local_10 * _DAT_006c9b30 - dVar1;
  FUN_004bc0a0(DAT_006c9038 * 0x80,&param_1,&local_10);
  _DAT_006c902c = (float)local_10 * _DAT_0052eff4;
  _DAT_006c9034 = (float)param_1 * _DAT_0052eff4;
  _DAT_006c9028 = (float)param_1 * _DAT_0052eff0;
  pfVar4 = (float *)&DAT_006c9044;
  _DAT_006c9b40 = _DAT_006c902c * (float)_DAT_006c9b28 + _DAT_006c9028 * (float)_DAT_006c90a0;
  _DAT_006c9b38 = _DAT_006c9034 * (float)_DAT_006c9b28 + _DAT_006c902c * (float)_DAT_006c90a0;
  _DAT_006c9b44 = _DAT_006c902c * (float)_DAT_006c9b30 + _DAT_006c9028 * (float)_DAT_006c90a8;
  _DAT_006c9b3c = _DAT_006c9034 * (float)_DAT_006c9b30 + _DAT_006c902c * (float)_DAT_006c90a8;
  _DAT_006c9030 = _DAT_006c902c;
  do {
    if (pfVar4[-1] != _DAT_0052e598) {
      *pfVar4 = _DAT_006c9b40 * pfVar4[-1] * _DAT_0052ecac + *pfVar4;
      pfVar4[1] = _DAT_006c9b38 * pfVar4[-1] * _DAT_0052ecac + pfVar4[1];
      if (*pfVar4 <= _DAT_0052efec) {
        if (*pfVar4 < _DAT_0052efe8) {
          fVar3 = *pfVar4 + _DAT_0052efec;
          goto LAB_004b9d8c;
        }
      }
      else {
        fVar3 = *pfVar4 - _DAT_0052efec;
LAB_004b9d8c:
        *pfVar4 = fVar3;
      }
      if (pfVar4[1] <= _DAT_0052efec) {
        if (_DAT_0052efe8 <= pfVar4[1]) goto LAB_004b9dc2;
        fVar3 = pfVar4[1] + _DAT_0052efec;
      }
      else {
        fVar3 = pfVar4[1] - _DAT_0052efec;
      }
      pfVar4[1] = fVar3;
    }
LAB_004b9dc2:
    pfVar4 = pfVar4 + 3;
    if (0x6c90a3 < (int)pfVar4) {
      _DAT_006c9b28 = 0.0;
      _DAT_006c90a0 = 0.0;
      if (_DAT_00564d18 <= _DAT_0052efec) {
        if (_DAT_00564d18 < _DAT_0052efe8) {
          _DAT_00564d18 = _DAT_00564d18 + _DAT_0052efec;
        }
      }
      else {
        _DAT_00564d18 = _DAT_00564d18 - _DAT_0052efec;
      }
      if (_DAT_00564d1c <= _DAT_0052efec) {
        if (_DAT_00564d1c < _DAT_0052efe8) {
          _DAT_00564d1c = _DAT_00564d1c + _DAT_0052efec;
        }
        return;
      }
      _DAT_00564d1c = _DAT_00564d1c - _DAT_0052efec;
      return;
    }
  } while( true );
}

