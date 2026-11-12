
/* sweep */

void Map_Exit(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  g_NextMode = g_StarbaseScreen;
  ScreenZoom_FreeAll();
  Map_Free();
  MenuHotkey_Set(0x73,0);
  puVar2 = &DAT_00571ca0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

