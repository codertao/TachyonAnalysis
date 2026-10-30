
void FUN_00462540(void)

{
  if ((g_FlightStateFlags & 2) == 0) {
    FUN_0048ccf0();
    FUN_0048cd90(0x186);
    FUN_0042ffb0();
    FUN_00414850(s__SYSOP__00549548);
    FUN_00425030();
    DAT_0058b07c = FUN_00431de0(s_shdw_08b_pcx_005366e0,0x20000);
    FUN_004582e0();
    FUN_00430150(&PTR_DAT_0053eb10);
  }
  return;
}

