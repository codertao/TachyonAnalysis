
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* reads Font_SetColorRamp's stack args via its EBP */

void __cdecl Font_BuildColorRamp16(void)

{
  bool bVar1;
  int unaff_EBP;
  int iVar2;
  
  _DAT_004e717c = (uint)(byte)(&DAT_004e8a10)[*(int *)(unaff_EBP + 8)];
  _DAT_004e7170 = (uint)(byte)(&DAT_004e8a10)[*(int *)(unaff_EBP + 0x14)];
  DAT_004e7188 = _DAT_004e717c - _DAT_004e7170;
  _DAT_004e7180 = (uint)(byte)(&DAT_004e8a10)[*(int *)(unaff_EBP + 0xc)];
  _DAT_004e7174 = (uint)(byte)(&DAT_004e8a10)[*(int *)(unaff_EBP + 0x18)];
  DAT_004e718c = _DAT_004e7180 - _DAT_004e7174;
  _DAT_004e7184 = (uint)(byte)(&DAT_004e8a10)[*(int *)(unaff_EBP + 0x10)];
  _DAT_004e7178 = (uint)(byte)(&DAT_004e8a10)[*(int *)(unaff_EBP + 0x1c)];
  DAT_004e7190 = _DAT_004e7184 - _DAT_004e7178;
  iVar2 = 0xff;
  do {
    *(uint *)(&DAT_004e56bc + iVar2 * 4) =
         CONCAT31((int3)((uint)(CONCAT31((int3)(((uint)(byte)(&DAT_004e8810)
                                                             [((&DAT_004e7188)[DAT_004e727c] * iVar2
                                                              >> 8) + *(int *)(&DAT_004e7170 +
                                                                              DAT_004e727c * 4)] <<
                                                ((byte)DAT_004e7268 & 0x1f)) >> 8),
                                         (&DAT_004e8810)
                                         [((&DAT_004e7188)[DAT_004e7294] * iVar2 >> 8) +
                                          *(int *)(&DAT_004e7170 + DAT_004e7294 * 4)]) <<
                               ((byte)DAT_004e7280 & 0x1f)) >> 8),
                  (&DAT_004e8810)
                  [((&DAT_004e7188)[DAT_004e72ac] * iVar2 >> 8) +
                   *(int *)(&DAT_004e7170 + DAT_004e72ac * 4)]) >> (8U - (char)DAT_004e7298 & 0x1f);
    bVar1 = 0 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return;
}

