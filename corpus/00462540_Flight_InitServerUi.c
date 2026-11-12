
/* sweep: *SYSOP* */

void Flight_InitServerUi(void)

{
  if ((g_FlightStateFlags & 2) == 0) {
    TextBar_Init();
    TextBar_SetY(0x186);
    Input_Init();
    ChatInput_Init(s__SYSOP__00549548);
    FlightUi_InitAll();
    DAT_0058b07c = load_font(s_shdw_08b_pcx_005366e0,0x20000);
    Flight_ResetViewport();
    Input_PushBindingSet(&PTR_DAT_0053eb10);
  }
  return;
}

