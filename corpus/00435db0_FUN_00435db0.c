
void FUN_00435db0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005a6618;
  if (DAT_005a6614 == 0) {
    uVar1 = 0xffffffff;
  }
  FUN_00435d10(uVar1);
  DAT_005a5e2c = Rtxt_GroupBaseIndex(DAT_005a6144,s_FLIGHT_GROUPS_0053fa08);
  Spx_LoadSectorTop(&DAT_005a5520);
  FUN_0048e090();
  DAT_005a5e1c = DAT_005a5584;
  DAT_005a5e20 = DAT_005a5588;
  Wingman_Init();
  return;
}

