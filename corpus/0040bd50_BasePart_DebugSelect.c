
/* sweep */

undefined4 BasePart_DebugSelect(int param_1)

{
  if (((g_FlightStateFlags & 4) != 0) && (DAT_005b3314 == 0)) {
    DAT_005b3314 = 1;
    DAT_005b3318 = PartChain_FindFlag(*(undefined4 *)(param_1 + 0xdc),1);
    Player_DockStarbase();
  }
  return 0;
}

