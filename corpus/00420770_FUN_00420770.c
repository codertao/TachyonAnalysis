
uint FUN_00420770(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
    DAT_00562b18 = DAT_00535958 * DAT_00562b18 + 1 & 0xffff;
    uVar2 = DAT_00562b18 / 0x1a;
    cVar3 = (bVar1 + 0x9f) - (char)((ulonglong)DAT_00562b18 % 0x1a);
    if (cVar3 < '\0') {
      cVar3 = cVar3 + '\x1a';
    }
    *param_1 = cVar3 + 0x61;
    return uVar2;
  }
  if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {
    DAT_00562b18 = DAT_00535958 * DAT_00562b18 + 1 & 0xffff;
    uVar2 = DAT_00562b18 / 0x1a;
    cVar3 = (bVar1 + 0xbf) - (char)((ulonglong)DAT_00562b18 % 0x1a);
    if (cVar3 < '\0') {
      cVar3 = cVar3 + '\x1a';
    }
    *param_1 = cVar3 + 0x41;
  }
  return uVar2;
}

