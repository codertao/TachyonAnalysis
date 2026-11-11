
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484e40(void)

{
  uint uVar1;
  undefined4 local_14;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = DAT_0056e3ac;
  local_8 = DAT_0056e3b0;
  local_4 = DAT_0056e3b4;
  uVar1 = Vec3_DistanceTo(&DAT_0056e3ac,&DAT_0056e3b8);
  if (uVar1 < 0x100) {
    DAT_0056e3ac = DAT_0056e3b8;
    DAT_0056e3b0 = DAT_0056e3bc;
    DAT_0056e3b4 = DAT_0056e3c0;
    return;
  }
  local_c = DAT_0056e3ac - DAT_0056e3b8;
  local_8 = DAT_0056e3b0 - DAT_0056e3bc;
  local_4 = DAT_0056e3b4 - DAT_0056e3c0;
  local_14 = (undefined4)(longlong)ROUND(_DAT_00563e00 * _DAT_0052ecb0);
  FUN_0048e590(&local_c,local_14);
  _DAT_00563e00 = _DAT_00563e00 + _DAT_0052ecac;
  DAT_0056e3ac = DAT_0056e3ac - (local_c >> 6);
  DAT_0056e3b0 = DAT_0056e3b0 - (local_8 >> 6);
  DAT_0056e3b4 = DAT_0056e3b4 - (local_4 >> 6);
  if (_DAT_0052e59c < _DAT_00563e00) {
    _DAT_00563e00 = 1.0;
  }
  return;
}

