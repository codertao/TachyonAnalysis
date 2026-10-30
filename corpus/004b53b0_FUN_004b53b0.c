
undefined4 FUN_004b53b0(void)

{
  uint uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_006af504 == 0) {
    return 0;
  }
  if (DAT_006af514 < 1) {
    FUN_004b59e0();
  }
  else {
    uVar1 = FUN_004df4ba();
    if (uVar1 < 0xd) {
      BVar2 = ReadFile(DAT_006af500,&DAT_0066f4e0 + DAT_0055ed20 * 0x4000,DAT_006af510,&local_8,
                       (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return 0;
      }
      FUN_0049e7f0((DAT_006af51c >> 0x10) * (DAT_006af520 >> 0x10) >> 8);
      FUN_004df4c9();
      DAT_006af514 = DAT_006af514 - DAT_006af510;
      DAT_0055ed20 = DAT_0055ed20 + 1 & 0xf;
      DAT_006af520 = DAT_006af520 + DAT_006af528;
      if (DAT_006af520 < 0) {
        DAT_006af520 = 0;
      }
      else if (0xff0000 < DAT_006af520) {
        DAT_006af520 = 0xff0000;
      }
      if ((DAT_006af52c != 0) && (DAT_006af51c = DAT_006af51c - DAT_006af52c, DAT_006af51c < 0)) {
        DAT_006af51c = 0;
        return 1;
      }
    }
  }
  return 1;
}

