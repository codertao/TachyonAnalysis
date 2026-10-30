
int FUN_004a7e80(int param_1)

{
  int iVar1;
  undefined1 local_24 [8];
  int local_1c;
  uint local_18;
  int local_14;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = _AIL_WAV_info_8(param_1,local_24);
  if (iVar1 == 0) {
    return 0;
  }
  local_18 = (uint)(local_1c << 8) / local_18;
  iVar1 = local_18 << 8;
  if (local_14 == 4) {
    return local_18 << 9;
  }
  if (local_14 == 0x10) {
    iVar1 = (local_18 & 0xffffff) << 7;
  }
  return iVar1;
}

