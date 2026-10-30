
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e70db(void)

{
  bool bVar1;
  int unaff_EBP;
  int iVar2;
  
  _DAT_004e7170 = *(int *)(unaff_EBP + 0x14);
  DAT_004e7188 = *(int *)(unaff_EBP + 8) - _DAT_004e7170;
  _DAT_004e7174 = *(int *)(unaff_EBP + 0x18);
  DAT_004e718c = *(int *)(unaff_EBP + 0xc) - _DAT_004e7174;
  _DAT_004e7178 = *(int *)(unaff_EBP + 0x1c);
  DAT_004e7190 = *(int *)(unaff_EBP + 0x10) - _DAT_004e7178;
  iVar2 = 0xff;
  do {
    *(uint *)(&DAT_004e5abc + iVar2 * 4) =
         (uint)CONCAT21(CONCAT11((char)((uint)(DAT_004e7188 * iVar2) >> 8) + (char)_DAT_004e7170,
                                 (char)((uint)(DAT_004e718c * iVar2) >> 8) + (char)_DAT_004e7174),
                        (char)((uint)(DAT_004e7190 * iVar2) >> 8) + (char)_DAT_004e7178);
    bVar1 = 0 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return;
}

