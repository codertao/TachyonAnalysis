
/* sweep */

void Loading_Exit(void)

{
  if (DAT_00590e34 == &g_Mode_StarbaseHub) {
    Starbase_ReturnToHub(0);
  }
  else {
    g_NextMode = DAT_00590e34;
  }
  Bdf_FreeBackdrop();
  Teletype_ResetAll();
  Mnu_Shutdown(&g_UiManager);
  Starbase_FreeAll();
  Gfx_HwControl1();
  return;
}

