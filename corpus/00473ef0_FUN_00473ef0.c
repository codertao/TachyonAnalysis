
void FUN_00473ef0(void)

{
  g_NextMode = g_StarbaseScreen;
  FUN_004e4b65(0);
  FUN_0048b6f0(0);
  FUN_0048b6f0(1);
  FUN_0048b6f0(2);
  FUN_0046dd30(0,0);
  if (g_LoadoutDragItem != 0) {
    Player_AddVarInt(g_LoadoutDragItem + 0x20,g_LoadoutDragItem,
                     *(undefined4 *)(g_LoadoutDragItem + 0x54));
  }
  g_LoadoutDragItem = 0;
  Loadout_EndDrag();
  return;
}

