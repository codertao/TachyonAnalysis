
/* sweep */

void Flight_LoadAssetsIfClient(void)

{
  if ((g_FlightStateFlags & 1) != 0) {
    Flight_LoadAssets();
  }
  Rules_CallHook18();
  return;
}

