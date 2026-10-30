
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9a50(float param_1,float param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _DAT_006c9b30 = (double)(param_1 * (float)_DAT_0052efe0 + (float)_DAT_006c9b30);
  _DAT_006c90a8 = (double)((float)_DAT_006c90a8 - param_2 * (float)_DAT_0052efe0);
  DAT_0055f1dc = DAT_0055f1dc - param_3;
  if (_DAT_0052efd8 < DAT_0055f1dc) {
    DAT_0055f1dc = DAT_0055f1dc - _DAT_0052e548;
    _DAT_00564d18 = _DAT_00564d18 - _DAT_0052efd4;
    _DAT_00564d1c = _DAT_00564d1c - _DAT_0052efd0;
    puVar2 = &DAT_006c9094;
    do {
      puVar1 = puVar2 + -3;
      *puVar2 = *puVar1;
      puVar2[1] = puVar2[-2];
      puVar2[2] = puVar2[-1];
      puVar2 = puVar1;
    } while (0x6c9040 < (int)puVar1);
  }
  if (DAT_0055f1dc <= _DAT_0052e59c) {
    DAT_0055f1dc = DAT_0055f1dc + _DAT_0052e548;
    _DAT_00564d18 = _DAT_00564d18 + _DAT_0052efd4;
    _DAT_00564d1c = _DAT_00564d1c + _DAT_0052efd0;
    puVar2 = &DAT_006c9040;
    do {
      puVar1 = puVar2 + 3;
      *puVar2 = *puVar1;
      puVar2[1] = puVar2[4];
      puVar2[2] = puVar2[5];
      puVar2 = puVar1;
    } while ((int)puVar1 < 0x6c9094);
  }
  return;
}

