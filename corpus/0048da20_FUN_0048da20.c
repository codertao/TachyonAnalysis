
void FUN_0048da20(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_0056aab8 = FUN_004900a0(s_COUNTERS_00559cac);
  DAT_0056aab0 = FUN_00490080(s_COUNTERS_00559cac);
  if (0 < DAT_0056aab0) {
    FUN_0048e3d0(&DAT_0056aab4,DAT_0056aab0 << 3,4,s_trigger_counters_00559c98,0xbbbb);
    iVar2 = 0;
    if (0 < DAT_0056aab0) {
      puVar3 = (undefined4 *)(DAT_0056aab4 + 4);
      do {
        puVar1 = (undefined4 *)FUN_004900f0(DAT_005a6148,s_COUNTERS_00559cac,iVar2);
        *puVar3 = puVar1;
        *puVar1 = 0;
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar2 < DAT_0056aab0);
    }
    return;
  }
  DAT_0056aab0 = 0;
  return;
}

