
void FUN_0048d0a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0048d180();
  puVar2 = &GLBL_llist_large_thing;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0056aad4 = 1;
  DAT_0056aac4 = (uint)((longlong)*param_1 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)*param_1 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  DAT_0056aacc = (uint)((longlong)param_1[2] * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)param_1[2] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  DAT_0056aac8 = (uint)((longlong)param_1[1] * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)param_1[1] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  DAT_0056aad0 = (uint)((longlong)param_1[3] * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)param_1[3] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  FUN_0048d230(DAT_0056aac4);
  puVar2 = &DAT_005a67a0;
  puVar3 = &DAT_0056aae0;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004adda0(&DAT_0056aae0,DAT_0056aac4,DAT_0056aac8,DAT_0056aacc,DAT_0056aad0);
  return;
}

