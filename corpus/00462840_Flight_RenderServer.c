
/* sweep */

void Flight_RenderServer(void)

{
  int iVar1;
  
  if ((g_FlightStateFlags & 2) == 0) {
    if ((((byte)DAT_005897e4 & 0x3f) != 0) && (iVar1 = FlightUi_AnyActive(), iVar1 == 0)) {
      return;
    }
    Gfx_Lock(1);
    Gfx_BeginFrame();
    SrvStats_DrawSummary();
    SrvStats_DrawPlayers();
    TextBar_Draw();
    FlightUi_DispatchActive();
    Gfx_UnlockSurface();
    Gfx_Flip();
    DAT_005a6520 = DAT_005a6520 + 1;
  }
  return;
}

