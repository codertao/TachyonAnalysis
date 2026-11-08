
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486320(int param_1)

{
  undefined4 *puVar1;
  
  FUN_004862f0(param_1 < 1);
  puVar1 = (undefined4 *)Pak_GetAttachPoint(DAT_0056e38c,DAT_0056e3a4 + 0x1b);
  DAT_0056e3b8 = *puVar1;
  DAT_0056e3bc = puVar1[1];
  DAT_0056e3c0 = puVar1[2];
  _DAT_00563e00 = 0;
  _DAT_00563e04 = 0;
  return;
}

