
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484f60(void)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_0040f380(&DAT_0056e3ac,DAT_0056e3a8 + 0x134,&local_c);
  local_14 = (int)(longlong)ROUND(_DAT_00563e04 * _DAT_0052ecb8);
  iVar1 = local_c * 0x80 + DAT_0056e3c4 * -0x80 >> 0xb;
  iVar2 = local_14;
  if ((iVar1 <= local_14) && (iVar2 = iVar1, iVar1 < -local_14)) {
    iVar2 = -local_14;
  }
  DAT_0056e3c4 = DAT_0056e3c4 + iVar2;
  iVar1 = local_8 * 0x80 + DAT_0056e3c8 * -0x80 >> 0xb;
  iVar2 = local_14;
  if ((iVar1 <= local_14) && (iVar2 = iVar1, iVar1 < -local_14)) {
    iVar2 = -local_14;
  }
  DAT_0056e3c8 = DAT_0056e3c8 + iVar2;
  iVar1 = local_4 * 0x80 + DAT_0056e3cc * -0x80 >> 0xb;
  iVar2 = local_14;
  if ((local_14 < iVar1) || (iVar2 = -local_14, iVar1 < -local_14)) {
    iVar1 = iVar2;
  }
  _DAT_00563e04 = _DAT_00563e04 + _DAT_0052ecb4;
  DAT_0056e3cc = DAT_0056e3cc + iVar1;
  if (_DAT_0052e59c < _DAT_00563e04) {
    _DAT_00563e04 = 1.0;
  }
  return;
}

