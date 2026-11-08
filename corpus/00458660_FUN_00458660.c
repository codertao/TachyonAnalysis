
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458660(void)

{
  undefined4 local_8;
  
  FUN_00445720();
  FUN_004e53d6(DAT_0060398c);
  FUN_004aecf0();
  DAT_005b2b9c = GLBL_spacesav[0x35] * 0x2000;
  DAT_005a652c = &LAB_00458560;
  if (DAT_005b2b9c < 0x13880000) {
    DAT_005b2b9c = 0x13880000;
  }
  else if (0x493e0000 < DAT_005b2b9c) {
    DAT_005b2b9c = 0x493e0000;
  }
  _DAT_005b2b98 = (float)GLBL_spacesav[0x36] * _DAT_0052e644;
  if ((float)_DAT_0052eaf8 <= _DAT_005b2b98) {
    if ((float)_DAT_0052eaf0 < _DAT_005b2b98) {
      _DAT_005b2b98 = 4.0;
    }
  }
  else {
    _DAT_005b2b98 = 1.0;
  }
  local_8 = (undefined4)(longlong)ROUND(_DAT_005b2b98 * _DAT_0052e544);
  FUN_004b1d80(local_8);
  FUN_004b9ec0();
  FUN_004bbd70(DAT_005a67a8,DAT_005a67ac,0x32);
  FUN_004bae10(1);
  FUN_004bae60(&DAT_006b0858,4,0);
  return;
}

