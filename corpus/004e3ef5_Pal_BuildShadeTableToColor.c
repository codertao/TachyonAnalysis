
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (pal, out) lighting ramp: lower half black->full, upper half full->colour 0x603480 (no callers
   found) */

void __cdecl Pal_BuildShadeTableToColor(byte *pal,byte *out)

{
  byte bVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  byte *pbVar3;
  byte *pbVar4;
  
  DAT_004e300f = out;
  DAT_004e300b = DAT_00603590 >> 1;
  DAT_004e3007 = pal;
  DAT_004e3013 = (int)(0xffff / (longlong)(int)(DAT_004e300b - 1));
  DAT_004e301b = 0;
  _DAT_004e3027 = DAT_004e300b;
  do {
    pbVar4 = DAT_004e3007;
    _DAT_004e3023 = 0xff;
    *out = 0;
    out = out + 1;
    do {
      pbVar3 = pbVar4 + 3;
      uVar2 = (uint)(byte)(&DAT_004e3267)[pbVar4[5]] * DAT_004e301b >> 0x10;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_004e3006 = (&DAT_004e3067)[uVar2];
      uVar2 = (uint)(byte)(&DAT_004e3267)[*pbVar3] * DAT_004e301b >> 0x10;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_004e3004 = (&DAT_004e3067)[uVar2];
      uVar2 = (uint)(byte)(&DAT_004e3267)[pbVar4[4]] * DAT_004e301b >> 0x10;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_004e3005 = (&DAT_004e3067)[uVar2];
      pbVar4 = pbVar3;
      bVar1 = (*(code *)PTR_FUN_004e3053)(pbVar3,unaff_ESI);
      *out = bVar1;
      out = out + 1;
      _DAT_004e3023 = _DAT_004e3023 + -1;
    } while (_DAT_004e3023 != 0);
    DAT_004e301b = DAT_004e301b + DAT_004e3013;
    _DAT_004e3027 = _DAT_004e3027 - 1;
  } while (_DAT_004e3027 != 0);
  DAT_004e301b = 0;
  _DAT_004e3027 = DAT_004e300b;
  do {
    pbVar4 = DAT_004e3007;
    _DAT_004e3023 = 0xff;
    *out = 0;
    out = out + 1;
    do {
      pbVar3 = pbVar4 + 3;
      uVar2 = (uint)(byte)(&DAT_004e3267)[DAT_00603482] * DAT_004e301b +
              (uint)(byte)(&DAT_004e3267)[pbVar4[5]] * (0x10000 - DAT_004e301b) >> 0x10;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_004e3006 = (&DAT_004e3067)[uVar2];
      uVar2 = (uint)(byte)(&DAT_004e3267)[DAT_00603480] * DAT_004e301b +
              (uint)(byte)(&DAT_004e3267)[*pbVar3] * (0x10000 - DAT_004e301b) >> 0x10;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_004e3004 = (&DAT_004e3067)[uVar2];
      uVar2 = (uint)(byte)(&DAT_004e3267)[DAT_00603481] * DAT_004e301b +
              (uint)(byte)(&DAT_004e3267)[pbVar4[4]] * (0x10000 - DAT_004e301b) >> 0x10;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      DAT_004e3005 = (&DAT_004e3067)[uVar2];
      pbVar4 = pbVar3;
      bVar1 = (*(code *)PTR_FUN_004e3053)(pbVar3,unaff_ESI);
      *out = bVar1;
      out = out + 1;
      _DAT_004e3023 = _DAT_004e3023 + -1;
    } while (_DAT_004e3023 != 0);
    DAT_004e301b = DAT_004e301b + DAT_004e3013;
    _DAT_004e3027 = _DAT_004e3027 - 1;
  } while (_DAT_004e3027 != 0);
  return;
}

