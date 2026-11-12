
/* sweep */

void Loadout_Exit(void)

{
  g_NextMode = g_StarbaseScreen;
  Sw_EnableZBuffer(0);
  Teletype_ResetSlot(0);
  Teletype_ResetSlot(1);
  Teletype_ResetSlot(2);
  SbPak_SetActive(0,0);
  if (g_LoadoutDragItem != 0) {
    Player_AddVarInt(g_LoadoutDragItem + 0x20,g_LoadoutDragItem,
                     *(undefined4 *)(g_LoadoutDragItem + 0x54));
  }
  g_LoadoutDragItem = 0;
  Loadout_EndDrag();
  return;
}

