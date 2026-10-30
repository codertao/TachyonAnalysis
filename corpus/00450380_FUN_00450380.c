
void FUN_00450380(void)

{
  if ((DAT_00590238 != 0) && ((g_FlightStateFlags & 1) != 0)) {
    if (*(code **)(DAT_00590238 + 100) != (code *)0x0) {
      (**(code **)(DAT_00590238 + 100))();
    }
    FUN_0045d9d0(s_____SERVER_FORCED_END_OF_ROUND___0054856c,0);
  }
  return;
}

