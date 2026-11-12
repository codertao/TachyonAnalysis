
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (pal, out) like Pal_BuildShadeTableToColor, upper half brightens by saturating add (no callers
   found) */

void __cdecl Pal_BuildShadeTableAdditive(byte *pal,byte *out)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  byte *pbVar5;
  byte *pbVar6;
  
  DAT_004e300f = out;
  DAT_004e300b = DAT_00603590 >> 1;
  DAT_004e3007 = pal;
  DAT_004e3013 = (int)(0xffff / (longlong)(int)(DAT_004e300b - 1));
  DAT_004e301b = 0;
  _DAT_004e3027 = DAT_004e300b;
  do {
    pbVar6 = DAT_004e3007;
    _DAT_004e3023 = 0xff;
    *out = 0;
    out = out + 1;
    do {
      pbVar5 = pbVar6 + 3;
      uVar4 = (uint)(byte)(&DAT_004e3267)[pbVar6[5]] * DAT_004e301b >> 0x10;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      DAT_004e3006 = (&DAT_004e3067)[uVar4];
      uVar4 = (uint)(byte)(&DAT_004e3267)[*pbVar5] * DAT_004e301b >> 0x10;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      DAT_004e3004 = (&DAT_004e3067)[uVar4];
      uVar4 = (uint)(byte)(&DAT_004e3267)[pbVar6[4]] * DAT_004e301b >> 0x10;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      DAT_004e3005 = (&DAT_004e3067)[uVar4];
      pbVar6 = pbVar5;
      bVar3 = (*(code *)PTR_PalAsm_FindNearest_004e3053)(pbVar5,unaff_ESI);
      *out = bVar3;
      out = out + 1;
      _DAT_004e3023 = _DAT_004e3023 + -1;
    } while (_DAT_004e3023 != 0);
    DAT_004e301b = DAT_004e301b + DAT_004e3013;
    _DAT_004e3027 = _DAT_004e3027 - 1;
  } while (_DAT_004e3027 != 0);
  DAT_004e301b = DAT_004e3013 + -1;
  _DAT_004e3027 = DAT_004e300b;
  do {
    pbVar6 = DAT_004e3007;
    _DAT_004e3023 = 0xff;
    *out = 0;
    out = out + 1;
    do {
      iVar1 = DAT_004e301b;
      pbVar5 = pbVar6 + 3;
      while( true ) {
        while( true ) {
          while (iVar2 = DAT_004e301b,
                uVar4 = ((uint)(byte)(&DAT_004e3267)[pbVar6[5]] * DAT_004e301b >> 0x10) +
                        (uint)(byte)(&DAT_004e3267)[pbVar6[5]], 0xff < uVar4) {
            DAT_004e301b = DAT_004e301b - DAT_004e3013;
            if (iVar2 < DAT_004e3013) {
              DAT_004e301b = 0;
            }
          }
          DAT_004e3006 = (&DAT_004e3067)[uVar4];
          uVar4 = ((uint)(byte)(&DAT_004e3267)[*pbVar5] * DAT_004e301b >> 0x10) +
                  (uint)(byte)(&DAT_004e3267)[*pbVar5];
          if (uVar4 < 0x100) break;
          DAT_004e301b = DAT_004e301b - DAT_004e3013;
          if (iVar2 < DAT_004e3013) {
            DAT_004e301b = 0;
          }
        }
        DAT_004e3004 = (&DAT_004e3067)[uVar4];
        uVar4 = ((uint)(byte)(&DAT_004e3267)[pbVar6[4]] * DAT_004e301b >> 0x10) +
                (uint)(byte)(&DAT_004e3267)[pbVar6[4]];
        if (uVar4 < 0x100) break;
        DAT_004e301b = DAT_004e301b - DAT_004e3013;
        if (iVar2 < DAT_004e3013) {
          DAT_004e301b = 0;
        }
      }
      DAT_004e3005 = (&DAT_004e3067)[uVar4];
      DAT_004e301b = iVar1;
      pbVar6 = pbVar5;
      bVar3 = (*(code *)PTR_PalAsm_FindNearest_004e3053)(pbVar5,unaff_ESI);
      *out = bVar3;
      out = out + 1;
      _DAT_004e3023 = _DAT_004e3023 + -1;
    } while (_DAT_004e3023 != 0);
    DAT_004e301b = DAT_004e301b + DAT_004e3013;
    _DAT_004e3027 = _DAT_004e3027 - 1;
  } while (_DAT_004e3027 != 0);
  return;
}

