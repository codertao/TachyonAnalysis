
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485330(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00485240();
  call_Math_SinCos3((float *)&DAT_005b9628,-DAT_005b95e8,-DAT_005b95ec,-DAT_005b95f0);
  FUN_00445720();
  FUN_004b1c80(0xa103,0xa103);
  puVar2 = &DAT_0056e340;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0056e380 = Pak_Load(&DAT_00587a44,s_mnu_shipyard_pak_00557ab8,&DAT_00587a54);
  DAT_0056e35c = 0;
  DAT_0056e360 = 0;
  DAT_0056e364 = 0;
  _DAT_0056e368 = 0;
  _DAT_0056e36c = 0;
  _DAT_0056e370 = 0;
  _DAT_0056e354 = 0xff;
  DAT_0056e38c = _DAT_0056e380;
  Model_SelectState(&DAT_0056e340,0);
  FUN_004852d0();
  return;
}

