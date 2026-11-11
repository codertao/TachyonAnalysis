
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (pal, out, rgb) ramp of each colour towards rgb (no callers found) */

void __cdecl Pal_BuildTintTable(byte *pal,byte *out,byte *rgb)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  byte *pbVar6;
  
  DAT_004e300f = out;
  DAT_004e300b = DAT_00603590;
  DAT_004e3007 = pal;
  DAT_004e3057 = (uint)*rgb;
  DAT_004e305b = (uint)rgb[1];
  DAT_004e305f = (uint)rgb[2];
  DAT_004e3013 = (int)(0x10000 / (longlong)DAT_00603590);
  DAT_004e301b = 0;
  _DAT_004e3027 = DAT_00603590;
  do {
    _DAT_004e3023 = 0x100;
    pbVar6 = DAT_004e3007;
    do {
      DAT_004e3063 = 0;
      uVar2 = (DAT_004e305f * DAT_004e301b >> 0x10) + (uint)pbVar6[2];
      if (0xff < uVar2) {
        DAT_004e3063 = uVar2 - 0xff;
        uVar2 = 0xff;
      }
      DAT_004e3006 = (undefined1)uVar2;
      uVar3 = (DAT_004e3057 * DAT_004e301b >> 0x10) + (uint)*pbVar6;
      if (0xff < uVar3) {
        DAT_004e3063 = DAT_004e3063 + uVar3;
        DAT_004e3063 = DAT_004e3063 + -0xff;
        uVar3 = 0xff;
      }
      DAT_004e3004 = (undefined1)uVar3;
      uVar4 = (DAT_004e305b * DAT_004e301b >> 0x10) + (uint)pbVar6[1];
      if (0xff < uVar4) {
        DAT_004e3063 = DAT_004e3063 + uVar4;
        DAT_004e3063 = DAT_004e3063 + -0xff;
        uVar4 = 0xff;
      }
      DAT_004e3005 = (undefined1)uVar4;
      if (DAT_004e3063 != 0) {
        iVar5 = ((int)((0xff - (uVar2 & 0xff)) * DAT_004e3063) >> 8) + (uVar2 & 0xff);
        if (0x8000 < DAT_004e301b) {
          iVar5 = ((int)((0xff - iVar5) * (DAT_004e301b - 0x8000)) >> 0xf) + iVar5;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        DAT_004e3006 = (undefined1)iVar5;
        iVar5 = ((int)((0xff - (uVar3 & 0xff)) * DAT_004e3063) >> 8) + (uVar3 & 0xff);
        if (0x8000 < DAT_004e301b) {
          iVar5 = ((int)((0xff - iVar5) * (DAT_004e301b - 0x8000)) >> 0xf) + iVar5;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        DAT_004e3004 = (undefined1)iVar5;
        iVar5 = ((int)((0xff - (uVar4 & 0xff)) * DAT_004e3063) >> 8) + (uVar4 & 0xff);
        if (0x8000 < DAT_004e301b) {
          iVar5 = ((int)((0xff - iVar5) * (DAT_004e301b - 0x8000)) >> 0xf) + iVar5;
        }
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        DAT_004e3005 = (undefined1)iVar5;
      }
      bVar1 = (*(code *)PTR_FUN_004e3053)(pbVar6,unaff_ESI);
      *out = bVar1;
      out = out + 1;
      pbVar6 = pbVar6 + 3;
      _DAT_004e3023 = _DAT_004e3023 + -1;
    } while (_DAT_004e3023 != 0);
    DAT_004e301b = DAT_004e301b + DAT_004e3013;
    _DAT_004e3027 = _DAT_004e3027 + -1;
  } while (_DAT_004e3027 != 0);
  return;
}

