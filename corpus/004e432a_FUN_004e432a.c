
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall
FUN_004e432a(undefined4 param_1,undefined4 param_2,byte *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  uint uVar4;
  undefined4 unaff_ESI;
  byte *pbVar5;
  byte *pbVar6;
  
  DAT_004e300f = param_4;
  DAT_004e300b = DAT_00603590 >> 1;
  DAT_004e3007 = param_3;
  DAT_004e3013 = (int)(0xffff / (longlong)(int)(DAT_004e300b - 1));
  DAT_004e301b = 0;
  _DAT_004e3027 = DAT_004e300b;
  do {
    pbVar6 = DAT_004e3007;
    _DAT_004e3023 = 0xff;
    *param_4 = 0;
    param_4 = param_4 + 1;
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
      uVar3 = (*(code *)PTR_FUN_004e3053)(pbVar5,unaff_ESI);
      *param_4 = uVar3;
      param_4 = param_4 + 1;
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
    *param_4 = 0;
    param_4 = param_4 + 1;
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
      uVar3 = (*(code *)PTR_FUN_004e3053)(pbVar5,unaff_ESI);
      *param_4 = uVar3;
      param_4 = param_4 + 1;
      _DAT_004e3023 = _DAT_004e3023 + -1;
    } while (_DAT_004e3023 != 0);
    DAT_004e301b = DAT_004e301b + DAT_004e3013;
    _DAT_004e3027 = _DAT_004e3027 - 1;
  } while (_DAT_004e3027 != 0);
  return CONCAT44(param_2,in_EAX);
}

